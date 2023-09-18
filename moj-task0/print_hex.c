#include "main.h"

/**
 * print_hex - print a number in hexadecimal with lowercase letters.
 * @args: the argument passed.
 * Return: the length of printed characters.
 */

int print_hex(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int printed_chars = printBy_Base(num, 16);

	return (printed_chars);
}
