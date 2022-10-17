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
        int i = 0, count = 0, count_fun;
        int len = strlen(format);
        va_list args;

        va_start(args, format);

        while (format[i] != '\0')
        {
		count++;
		i++;
        }
        va_end(args);
        return (count);
}
