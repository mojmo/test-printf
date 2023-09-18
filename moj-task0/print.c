#include "main.h"

/**
 * _put - prints a string.
 *
 * @str: the string.
 *
 * Return: length of the string.
 */

int _put(char *str)
{
	char *start = str;

	while (*str)
	{
		_putchar(*str);
		str++;
	}
	return (str - start);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(int c)
{
	static int i;
	static char buffer[BUFFER_SIZE];

	if ((c == -1) || (i >= BUFFER_SIZE))
	{
		write(1, buffer, i);
		i = 0;
	}

	if (c != -1)
		buffer[i++] = c;

	return (1);
}




