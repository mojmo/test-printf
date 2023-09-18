#include "main.h"

/**
 * print_octal - a function to print an octal number
 * @args: the number
 * Return: the length of the number
 */

int print_octal(va_list args)
{
	int num = va_arg(args, int), printed_chars = 0, j, i = 0;
	char local[100];

	while (num != 0)
	{
		local[i] = (num % 8) + '0';
		num /= 8;
		i++;
		printed_chars++;
	}
	j = i - 1;
	
	while (j >= 0)
	{
		fill_buffer(local[j]);
		j--;
	}
	return (printed_chars);
}
