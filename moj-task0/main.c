#include "main.h"

/**
 * main - entry point.
 * Return: Always 0.
 */

int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	/*void *addr;*/

	char character = 'A';
	char string[] = "Hello, World!";
	ui = (unsigned int)INT_MAX + 1024;

	printf("Printing a character: %c\n", character);
	printf("Printing a string: %s\n", string);

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
	len2  = printf("Percent:[%%]\n");

	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);

	len = _printf("%b\n", 98);
	_printf("Len:[%d]\n", len); /*1100010*/;

	_printf("Unsigned:[%u]\n", ui);
    	printf("Unsigned:[%u]\n", ui);

	_printf("Unsigned:[%u]\n", -10);
	printf("Unsigned:[%u]\n", -10);

	_printf("%u\n", 'a');

	_printf("Unsigned octal:[%o]\n", ui);
    	printf("Unsigned octal:[%o]\n", ui);

	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);

	_printf(NULL);
	_printf("%s", NULL);
	_printf("%c", NULL);
	_printf("%");
	_printf("% ");

	return (0);
}
