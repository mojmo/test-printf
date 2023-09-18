#include "main.h"
/**
 * print_unsigned - a function that print unsigned number
 * @args: the number to be printed
 * Return: the length of the number
 */
int print_unsigned(va_list args)
{
	int num = va_arg(args, int);
	int printed_chars = 0, i = 0, j;
	char local[100];

	if (num < 0)
		num *= -1;
	do {
		local[i++] = (num % 10) + '0';
		num /= 10;
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
