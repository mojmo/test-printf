#include "main.h"

/**
 * print_octal - print a number in octal.
 * @args: the argument passed.
 * Return: the length of the number.
 */

int print_octal(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int printed_chars = printBy_Base(num, 8);

	return (printed_chars);
}
