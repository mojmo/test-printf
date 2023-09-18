#include "main.h"

/**
 * main - entry point.
 * Return: Always 0.
 */

int main(void)
{
	int len;
	int len2;
	int number = 123;
	int numbere = -22;
	int s = -0123;
	int h = 255;
	/*unsigned int ui;*/
	/*void *addr;*/

	char character = 'A';
	char string[] = "Hello, World!";

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

	len = _printf("%b", -1);
	_printf("\nLen:[%d]\n", len);

	_printf(NULL);
	_printf("%s", NULL);
	_printf("%c", NULL);
	_printf("%");
	_printf("% ");

	 _printf("octal:[%o]\n", number);
	 _printf("unsigned:[%u]\n", numbere);
	 _printf("unsigned:[%u]\n", s);
	 _printf("hex:[%x]\n", h);
	 _printf("HEX:[%X]\n", h);

	return (0);
}
