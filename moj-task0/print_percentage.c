#include "main.h"

/**
 * print_percentage - print a %.
 * @args: the argument passed.
 * Return: the number of chars printed.
 */

int print_percentage(__attribute__((unused)) va_list args)
{
	return (fill_buffer('%'));
}
