#include "main.h"

/**
 * print_string - print a string.
 * @args: argument passed.
 * Return: the number of printed characters.
 */

int print_string(va_list args)
{
	int printed_chars = 0;
	char *str = va_arg(args, char *);

	while (*str)
	{
		printed_chars += _putchar(*str);
		str++;
	}
	return (printed_chars);
}
