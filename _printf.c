#include "main.h"

/**
 * _printf - print variable arguments.
 *
 * @format: Format by specifier.
 *
 * Return: count of chars.
 */
int _printf(const char *format, ...)
{
        int i, count = 0, count_fun;
        int len = strlen(format);
        va_list args;

        va_start(args, format);

        for (i = 0; i < num_args; i++)
        {
                if (format[i] == 'c')
                        count++;
                else if (format[i] == 's')
                        count++;
        }
        va_end(args);
        return (count);
}
