#ifndef TEST_HEADER_H
#define TEST_HEADER_H
#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
#include<limits.h>
#include<stdarg.h>
#define BUFFER_SIZE 1024

int cases(char *s, int printed_chars);
va_list args;
int buffer_i;
char *buffer;
int print_integer(int n, int *count);
int print_string(char *str, int printed_chars);
int _printf(const char *format, ...);

#endif
