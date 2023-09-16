/*include "main.h"*/
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/**
 * _putchar - writes the character c to stdout.
 * @c: The character to print.
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_integer - a function that prints an integer.
 * @n: a number to print.
 */

void print_integer(int n)
{
	unsigned int num = n;

	if (n < 0)
		_putchar('-'), num *= -1;
	if ((num / 10) != 0)
		print_integer(num / 10);
	_putchar((num % 10) + '0');
}

/**
 * num_len - find out the number of digits of an integer.
 * @n: the number.
 * Return: the number of digits.
 */

int num_len(int n)
{
	int count = 0;

	if (n < 0)
		++count;
	do {
		n = n / 10, ++count;
	} while (n != 0);
	return (count);
}

/**
 * print_string - print a string.
 * @str: pointer to the string.
 * @printed_chars: the number of chars printed.
 * Return: the number of chars printed and string.
 */

int print_string(char *str, int printed_chars)
{
	while(str && *str != '\0')
		_putchar(*str), printed_chars++, str++;
	return (printed_chars);
}

/**
 * _printf - a function that produces output according to a format.
 * @format: a list of types of arguments passed to the function.
 * Return: the number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list args;
	unsigned int i = 0;
	int num, numLen = 0, printed_chars = 0;
	char *str;

	va_start(args, format);
	while (format && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case '%':
					_putchar('%'), printed_chars++;
					break;
				case 'c':
					_putchar(va_arg(args, int)), printed_chars++;
					break;
				case 's':
					printed_chars += print_string(va_arg(args, char *), printed_chars);
					break;
				case 'd':
				case 'i':
					num = va_arg(args, int);
					print_integer(num);
					numLen = num_len(num);
					printed_chars += numLen;
					break;
			}
		}
		else
			_putchar(format[i]), printed_chars++;
		i++;
	}
	va_end(args);
	return (printed_chars);
}

int main()
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");

	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);

	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);

	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');

	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");

	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");

	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);

	return (0);
}
