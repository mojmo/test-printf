#include "main.h"

/**
 * print_bin - print a decimal number in binary.
 * @args: the argument passed.
 * Return: the length of the number.
 */

int print_bin(va_list args)
{
	int num = va_arg(args, int);
	int printed_chars = 0, i = 0, j;
	char local[50];

	if (num < 0)
		return (-1);

	do {
		local[i++] = (num % 2) + '0';
		num /= 2;
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
