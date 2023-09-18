#include "test_header.h"
/**
 * _printf - a function that produces output according to a format.
 * @format: a list of types of arguments passed to the function.
 * Return: the number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, printed_chars = 0, num, numLen = 0;
	buffer = malloc(BUFFER_SIZE);
	buffer_i = 0;

	va_start(args, format);
	while (format && format[i] != '\0')
	{
		if (buffer_i >= BUFFER_SIZE)
			buffer = realloc(buffer,  buffer_i * 2);
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case '%':
					buffer[buffer_i++] = '%';
					printed_chars++;
					break;
				case 'c':
					buffer[buffer_i++] = va_arg(args, int);
					printed_chars++;
					break;
				case 's':	
					printed_chars += print_string(va_arg(args, char *), printed_chars);
					break;
				case 'd':
				case 'i':
					num = va_arg(args, int);
					printed_chars += print_integer(num, &numLen);
					break;
			}
		}
		else
		{
			buffer[buffer_i++] = format[i];
			printed_chars++;
		}
		i++;
}
write(1, buffer, buffer_i);
va_end(args);
return (printed_chars);
}
