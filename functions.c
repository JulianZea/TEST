#include "printf.h"

/**
 *print_character - prints character
 *@args: argument
 *
 *Return: character
 */

int print_character(va_list args)
{

        _putchar(va_arg(args, int));
        return (1);
}


/**
 *print_string - prints string
 *@args: arguments
 *Return: string
 */

int print_string(va_list args)
{

        int d;
        char *string = va_arg(args, char *);

        if (string == NULL)
                string = "(null)";
        for (d = 0; string[d]; d++)
        {
                _putchar(string[d]);
        }
        return (d);
}

/**
 *print_percentage - prints character "%"
 *@args : arguments
 *
 *Return: character "%"
 */
int print_percentage(va_list args)
{
        (void)args;
        return (write(1, "%", 1));
}