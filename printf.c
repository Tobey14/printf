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
	va_list args;

	va_start(args, format);

	while (format[i])
	{
		count_fun = 0;
		
	}
	va_end(args);
	return (count);
}