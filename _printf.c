#include "main.h"

/**
 * @check_for_specifier: The function takes argument and returns the count of characters
 */

static int (*check_for_specifiers(const char *format))(va_list)
{
unsigned int i;
inputs in[] = {
	{"c", pchar},
	{"s", pstring},
	{"i", pint},
	{"d", pint},
	{"\0", NULL}
};

for (i = 0; in[i].fm != NULL; i++)
{
	if (*(in[i].fm) == *format)
	{
		break;
	}
}
return (in[i].fn);
}

/**
 * _printf - print variable arguments.
 * @format: Format by specifier.
 * Return: count of chars.
 */
int _printf(const char *format, ...)
{
unsigned int i = 0, count = 0;
va_list args;
int (*f)(va_list);

if (format == NULL)
	return (-1);
va_start(args, format);
while (format[i])
{
	for (; format[i] != '%' && format[i]; i++)
	{
		write(1, &format[i], 1);
		count++;
	}
	if (!format[i])
		return (count);
	f = check_for_specifiers(&format[i + 1]);
	if (f != NULL)
	{
		count += f(args);
		i += 2;
		continue;
	}
	if (!format[i + 1])
		return (-1);
	write(1, &format[i], 1);
	count++;
	if (format[i + 1] == '%')
		i += 2;
	else
		i++;
}
va_end(args);
return (count);
}
