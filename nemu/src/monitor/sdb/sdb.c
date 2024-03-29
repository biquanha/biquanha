#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"
#include "memory/paddr.h"
static int is_batch_mode = false;

void init_regex();
void init_wp_pool();
void watchpoints_add(char *e);
void watchpoints_del(int id);
void watchpoints_display();
/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
  return -1;
}

static int cmd_help(char *args);

/* 单步执行 */
static int cmd_si(char *args) {
	int step;
	if (args == NULL) step = 1;
	else sscanf(args, "%d", &step);
	cpu_exec(step);
	return 0;
}
//扫描寄存器
static int cmd_info(char * args) {
    char *arg = strtok(NULL, " ");

    if (arg == NULL)  //this is for securaty
        printf("error arg for info\n");
    else if (arg[0] == 'r')
        isa_reg_display();
    else if (arg[0] == 'w')
        watchpoints_display();

    return 0;
}
//扫描内存
static int cmd_x(char *args){
    int number;
    paddr_t address;
    sscanf(args,"%d %x",&number,&address);
    for(int i=0;i<number;i++){
        printf("0x%02lx ",paddr_read(address+i,1));
    }
    return 0;
}
static int cmd_p(char *args) {
    bool success = true;
    /* calculate expression */
    uint64_t ret = expr(args, &success);
    /* check if argument has errors */
    if (success)
        printf("%s = %lx(%lu)\n", args, ret, ret);
    else
        printf("%s: Syntax Error.\n", args);
    return 0;
}
static int cmd_w(char *args) {
    watchpoints_add(args);
    return 0;
}

static int cmd_d(char *args) {
    /* extract the first argument */
    char *arg = strtok(NULL, " ");
    unsigned id;
    if (arg == NULL || sscanf(arg, "%u", &id) != 1)
        printf("'%s' must be an integer.\n", arg);
    /* free watchpoint */
    watchpoints_del(id);
    return 0;
}
static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display informations about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  {"si","单步执行", cmd_si},
  { "info", "Information of reg/watch_opint", cmd_info },
  { "x", "Scan memory", cmd_x },
  {"p","Calculate the result",cmd_p},
  { "w", "w <EXPR> -- Set a watchpoint at EXPR", cmd_w},
  { "d", "d <N> -- Delate the watchpoint N", cmd_d},
  /* TODO: Add more commands */

};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
