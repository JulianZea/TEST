#include <stdarg.h>
#include "printf.h"

/**
 *_printf - prints to output according to format
 *@format: character string
 *
 *Return: number of characters printed
 */

int _printf(const char *format, ...)
{
        int z = 0, d = 0;
        int (*f)(va_list);
        va_list args;

        va_start(args, format);
        if (format == NULL || !format[z + 1])
                return (-1);
        while (format[z])
        {
                if (format[z] == '%')
                {
                        if (format[z + 1])
                        {
                                if (format[z + 1] != 'c' && format[z + 1] != 's'
                                && format[z + 1] != '%'))
                                {
                                        d += _putchar(format[z]);
                                        d += _putchar(format[z + 1]);
                                        z++;
                                }
                                else
                                {
                                        f = get_func(&format[z + 1]);
                                        d += f(args);
                                        z++;
                                }
                        }
                }
                else
                {
                        _putchar(format[z]);
                        d++;
                }
                z++;
        }
        va_end(args);
        return (d);
}