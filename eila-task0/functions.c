#include "test_header.h"
/*
int _putchar(char st)
{
    char a* = str;
    while (*st)
  {
       
   }
  return(st - a);
}
*/
/*
int putBuff(char c)
{
    int i;
    char buf[BUFF_SIZE];
    
    if (c = -1 || i >= BUFF_SIZE)
      {
       write(1, buf,i);
       i = 0;
    }
        if (c != -1)
	    buf[i++] = c;
    return(i);
}
*/
int print_integer(int n, int *count)
{
   unsigned int num = n;

    if (n < 0)
	    buffer[buffer_i++] = '-';
    if ((num / 10) != 0)
	    print_integer(num / 10, count);
	buffer[buffer_i++] = (num % 10) + '0';
    (*count)++;
	   /* _putchar('-'), num *= -1, ++count;
    if ((num / 10) != 0)
              print_integer(num / 10, count);
    _putchar((num % 10) + '0');
    (*count)++;*/
    return(*count);
  }


int print_string(char *str, int printed_chars)
{
     while(str && *str != '\0')
     {
				            
    buffer[buffer_i++] = *str;
	printed_chars++;
    str++;
     }
     return(printed_chars);
}
