#include "main.h"


/**
 * _printf - a function that produces output according to a format.
 *
 * @format: a list of types of arguments passed to the function.
 *
 * Return: the number of characters printed.
 */

int _printf(const char *format, ...)
{
	int printed_chars = 0;
	va_list args;
	char *form = (char *)format;

	va_start(args, format);

	while (*form)
	{
		if (*form == '%')
		{
			form++;
			printed_chars += get_func(form, args);
		}
		else
			printed_chars += _putchar(*form);
		form++;
	}

	_putchar(-1);
	va_end(args);
	printf("chars = %d\n", printed_chars);
	return (printed_chars);
}
