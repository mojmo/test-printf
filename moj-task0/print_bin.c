#include "main.h"

/**
 * print_bin - print a decimal number in binary.
 * @args: the argument passed.
 * Return: the length of the number.
 */

int print_bin(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int printed_chars = printBy_Base(num, 2);

	return (printed_chars);
}
