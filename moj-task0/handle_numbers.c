#include "main.h"

/**
 * printBy_Base - print a number based on its base.
 * @num: the number.
 * @base: the base.
 * Return: the length of the printed characters.
 */

int printBy_Base(unsigned int num, int base)
{
	int printed_chars = 0, i = 0, j;
	char local[100];
	char hex[] = "0123456789abcdef";

	do {
		if (base == 16)
			local[i++] = hex[num % base];
		else
			local[i++] = (num % base) + '0';
		num /= base;
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

/**
 * print_integer - print an integer.
 * @args: the passed argument.
 * Return: the number of digits of the number.
 */

int print_integer(va_list args)
{
	int num = va_arg(args, int);
	int printed_chars = 0, i = 0, j;
	char local[40];

	if (num < 0)
	{
		printed_chars++;
		fill_buffer('-');
		num *= -1;
	}

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
