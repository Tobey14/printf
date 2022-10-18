#include "main.h"

/**
 * pchar - fun to print char
 * @arg: input
 * Return: int
 */
int pchar(va_list arg)
{
	char c = va_arg(arg, int);

	write(1, &c, 1);
	return (1);
}

/**
 * pstring - fun print string char by char
 * @arg: input
 * Return: int
 */
int pstring(va_list arg)
{
	int i = 0, count = 0;
	char *str = va_arg(arg, char *);

	if (str == NULL)
	{
		str = "(null)";
	}

	for (i = 0; str[i]; i++)
	{
		write(1, &str[i], 1);
		count = count + 1;
	}

	return (count);
}

/**
 * pmod - print %char
 * @arg: input
 * Return: int
 */
int pmod(va_list arg)
{
	char c = '%';

	(void) arg;

	write(1, &c, 1);
	return (1);
}

/**
 * pint - print interger
 * @arg: input
 * Return: int
 */
int pint(va_list arg)
{
	int i = 1, len = 0;
	unsigned int n;
	char c;
	int j  = va_arg(arg, int);

	if (j < 0)
	{
		c = '-';
		len = len + write(1, &c, 1);
		n = j + -1;
	}
	else
		n = j;
	while (n / i > 9)
		i *= 10;

	while (i != 0)
	{
		c = n / i + '0';
		len = len + write(1, &c, 1);
		n = n % i;
		i = i / 10;
	}
	return (len);
}

