#include "main.h"

/**
 * *check_for_specifiers - gives count of associated argument
 * _printf - print variable arguments.
 * @format: Format by specifier.
 * Return: count of chars.
 */

static int (*check_for_specifiers(const char *format))(va_list)
{
unsigned int i;
inputs in[] = {
	{"c", pchar},
	{"s", pstring},
	{"i", pinti},
	{"d", pintd},
	{"b", pbinary},
	{"S", pString},
	{"p", ppoint},
	{"x", pLower},
	{"X", pUpper},
	{"%", pmod},
	{"u", punsign},
	{"o", poct},
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
	/*here:*/
	for (; format[i] != '%' && format[i]; i++)
	{
		_putchar(format[i]);
		count++;
	}
	if (!format[i])
		return (count);
	f = check_for_specifiers(&format[i + 1]);
	/**if (format[i] == '%' && format[i + 1] == '%' && format[i + 2] == '%' && format[i + 3] != '%')
	*	{
	*	_putchar(format[i+1]);
	*	_putchar(format[i+2]);
	*	i = i + 3;
	*	count++;
	*	goto here;
	*} main fail is mod failure fix it
	*/
	if (f != NULL)
	{
		count += f(args);
		i += 2;
		continue;
	}
	if (!format[i + 1])
		return (-1);
	_putchar(format[i]);
	count++;
	if (format[i + 1] == '%')
		i += 2;
	else
		i++;
}
va_end(args);
return (count);
}
