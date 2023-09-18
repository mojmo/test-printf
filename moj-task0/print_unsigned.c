#include "main.h"

/**
 * print_unsigned - print a positive number.
 * @args: the argument passed.
 * Return: the length of the number.
 */

int print_unsigned(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int printed_chars = printBy_Base(num, 10);

	return (printed_chars);
}
