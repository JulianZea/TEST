#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * struct func_type - type structure
 * @t: pointer to the argument
 * @f: pointer-function associated with the argument
 */
typedef struct func_type
{
	char *t;
	int (*f)(va_list);
} func_t;

int _putchar(char c);
int _printf(const char *format, ...);
int (*get_func(const char *format))(va_list);
int print_string(va_list args);
int print_character(va_list args);
int print_percentage(va_list args);
#endif