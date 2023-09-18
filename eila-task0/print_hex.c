#include "main.h"
/**
 * print_hex - a function that print a hexadecimal number
 * @args: the number to be printed
 * Return: the length of the number
 *
 */
int print_hex(va_list args)
{
	int i = 0, r, printed_chars, j, num = va_arg(args, int);
	char local[100];

	while (num > 0)
	{
		r = num % 16;
	if (r < 10)
		local[i] = r + '0';
	else 
		local[i] = r - 10 + 'a';
	num /= 16;
	i++;
	printed_chars++;
	}
	local[i] = '\0';
	j = i - 1;

	while (j >= 0)
	{
		fill_buffer(local[j]);
		j--;
	}
	return (printed_chars);


}
