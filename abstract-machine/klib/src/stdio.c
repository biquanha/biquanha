#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
int vprintf(const char *fmt, va_list ap)
{
  char out[4096];                         //定义一个输出的数组
  int cnt = vsprintf(out, fmt, ap);
  putstr(out);
  return cnt;                            //vsprintf返回的字符串大小
}
int printf(const char *fmt, ...)
{
  va_list args;                                
  va_start(args, fmt);
  int siz = vprintf(fmt, args);
  va_end(args);
  return siz;
}

int vsprintf(char *out, const char *fmt, va_list ap)          //目前可输出%d %s %c
{
  int cnt = 0;
  for (int i = 0; fmt[i]; i++)
  {
    if (fmt[i] != '%')                       //找到%指示开头
    {
      out[cnt++] = fmt[i];
      continue;
    }
    int num = 0, num_b_cnt = 0;
    int num_b[20] = {0};                     //d的字符串判断
    char *str = NULL;                        //string字符串判断
    char chr;                                //单个字符判断
    switch (fmt[i + 1])
    {
    case 'd':
      num_b_cnt = 0;
      num = va_arg(ap, int);                 //返回当前并指向下一个
      if (num == 0)
        num_b[++num_b_cnt] = 0;
      else if (num < 0)
        out[cnt++] = '-', num = -num;
      while (num != 0)                      //分割d字符如13经过循环后，先写入3,在写入1,【0】=3,【1】=1
      {
        num_b[++num_b_cnt] = num % 10;
        num /= 10;
      }
      for (int i = num_b_cnt; i >= 1; i--)
        out[cnt++] = (char)(num_b[i] + '0');//把读入的int转换类型转换成char写入字符串大表中
      break;
    case 's':
      str = va_arg(ap, char *);
      for (int i = 0; str[i]; i++)         //循环写入字符串
        out[cnt++] = str[i];
      break;
    case 'c':                              //写入单个字符
      chr = va_arg(ap, int);
      out[cnt++] = chr;
      break;
    default:
      break;
    }
    i++;
  }
  out[cnt++] = '\0';                      //string末尾写入\0指示
  return cnt;
}

int sprintf(char *out, const char *fmt, ...)
{
  va_list args;
  va_start(args, fmt);
  int siz = vsprintf(out, fmt, args);
  va_end(args);
  return siz;
}

int snprintf(char *out, size_t n, const char *fmt, ...)
{
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap)
{
  panic("Not implemented");
}

#endif
