#include "main.h"

/**
 * print_Hex - print a number in hexadecimal with uppercase letters.
 * @args: the argument passed.
 * Return: the length of the printed characters.
 */

int print_Hex(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int printed_chars = 0, i = 0, j;
	char local[100];
	char HEX[] = "0123456789ABCDEF";

	do {
		local[i++] = HEX[num % 16];
		num /= 16;
		printed_chars++;
	} while (num != 0);

	j = i - 1;

	while (j >= 0)
	{
		fill_buffer(local[j]);
		j--;
	}
	return (printed_chars);
}
