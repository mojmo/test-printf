#include "main.h"

/**
 * print_char - print a character.
 * @args: the argument passed to _printf function.
 * Return: the number of chars printed.
 */

int print_char(va_list args)
{
	return (fill_buffer(va_arg(args, int)));
}
