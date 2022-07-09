#include "printf.h"

/**
 * get_func - check for valid specifier
 * @format: a character to check
 * Return: a pointer to the function
 */
int (*get_func(const char *format))(va_list)
{
        int z;
        func_t p[] = {
                {"c", print_character},
                {"s", print_string},
                {"%", print_percentage},
                {NULL, NULL}
        };

        for (z = 0; p[z].t; z++)
        {
                if (*format == *(p[z].t))
                {
                        return (p[z].f);
                }
        }
        return (NULL);
}