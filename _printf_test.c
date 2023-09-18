#include "test_header.h"
int _printf(const char *format, ...)
{
	    
	va_list args;
	int i = 0, printed_chars = 0;
	int num, numLen = 0;
	char ch;
	buffer = malloc(BUFFER_SIZE);
	buffer_i = 0;
	/*int buffer_i = 0;
	char *buffer = malloc(BUFFER_SIZE);*/


	va_start(args, format);
	while (format && format[i] != '\0')
	{
		if (buffer_i >= BUFFER_SIZE)
		{
			buffer = realloc(buffer,  buffer_i * 2);
		}

		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case '%':
					    
					buffer[buffer_i++] = '%';
					/*if (buffer_i == BUFF_SIZE)
					{
						print_buffer(buffer, buffer_i);
						printed_chars += buffer_i;
					}*/
					printed_chars++;
					break;
				case 'c':
					ch = va_arg(args, int);
					buffer[buffer_i++] = ch;
					/*if (buffer_i == BUFF_SIZE)
					{
						print_buffer(buffer, buffer_i);
						printed_chars += buffer_i;
					}*/
					printed_chars++;
					break;
				case 's':
					/*
					 while(str && *str != '\0')
					   {
				 	  buffer[buffer_i++] = *str;
					  printed_chars++;
					  str++;
					 }
					  */ 				
					printed_chars += print_string(va_arg(args, char *), printed_chars);
					break;
				case 'd':
				case 'i':
					num = va_arg(args, int);
					/*print_integer(num, *numLen);*/
					printed_chars += print_integer(num, &numLen); /*numLen;*/
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
/*print_buffer(buffer, buffer_i);*/
va_end(args);
return (printed_chars);
}
