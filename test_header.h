/******************************************************************************
 *
 * Welcome to GDB Online.
 * GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
 * C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
 * Code, Compile, Run and Debug online from anywhere in world.
 *
 * *******************************************************************************/

#ifndef TEST_HEADER_H
#define TEST_HEADER_H
#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
#include<limits.h>
#include<stdarg.h>
#define BUFFER_SIZE 1024

int buffer_i;
char *buffer;
int print_integer(int n, int *count);
int print_string(char *str, int printed_chars);
int _printf(const char *format, ...);
/*int putBuff(char c);
int _putchar(char st);
*/

/*
 * typedef struct spec
 * {
 *     char *spec;
 *     int (*f)(va_list, p);
}spec_t;
*/



#endif

/*
int main()
{
	    printf("Hello World");

	        return 0;
}
*/
