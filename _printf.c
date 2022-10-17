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
int i = 0, j = 0, count = 0, count_fun;
int len = strlen(format);
va_list args;
inputs in[] = {
	{'c', pchar},
	{'s', pstring},
	{'\0', NULL}
};

va_start(args, format);
for (; format[i]; i++)
{
	if (format[i] == '%')
	{
		i++;
		for (; format[i] != '\0'; i++)
		{
			for (; in[j].fm != '\0'; j++)
			{
				if (format[i] == in[j].id)
				{
					count = count + in[j].fn(args);
					break;
				}
				if (in[j].fm)
				{
					break;
				}
			}
			if (format[i] == '\0')
			{
				return (-1);
			}
		}
	else
	{
		write(1, &format[i], 1);
		count = count + 1;
	}
	}
va_end(args);
return (count);
}
}
