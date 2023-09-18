#include "test_header.h"
/*
int cases(char *s, int printed_chars)
{
	
	switch (s)
{
	case '%':
		buffer[buffer_i++] = '%';
		printed_chars++;
		break;
	case 's':
		printed_chars += print_string(va_arg(args, char *), printed_chars);
		printed_chars++;
		break;
	case 'd':
	case 'i':
		num = va_arg(args, int);
		printed_chars += print_integer(num, numLen);
		break;
		};
		return(printed_chars);
		}


*/
/**
 * print_integer - a function to print an integer number
 * @n; the number to be printed
 * @count: length of the number
 * Return: the length of the number
 */

int print_integer(int n, int *count)
{
   unsigned int num;

    if (n < 0)
    {
	    buffer[buffer_i++] = '-';
    num = -n;
    }
    else
	    num = n;
    if ((num / 10) != 0)
	    print_integer(num / 10, count);
	buffer[buffer_i++] = (num % 10) + '0';
    (*count)++;
    return(*count);
  }

/**
 * print_string - a function to print a string
 * @str: the stirng to be printed
 * @printed_chars: number of printed characters 
 * Return: number of printed characters
 *
 */

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
