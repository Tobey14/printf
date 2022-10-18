#include "main.h"

/**
 * pchar - fun to print char
 * @arg: input
 * Return: int
 */
int pchar(va_list arg)
{
	char c = (char)va_arg(arg, int);

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
	int i, count = 0;
	char *str = va_arg(arg, char *);

	if (str == NULL)
	{
		str = "(null)";
	}

	for (i = 0; str[i]; i++)
	{
		write(1, &str[i], 1);
		count++;
	}

	return (count);
}

/**
 * pint - print interger
 * @arg: input
 * Return: int
 */
int pinti(va_list arg)
{
	int a[10];
	int j, m, n, sum, count;

	n = va_arg(arg, int);
	count = 0;
	m = 1000000000;
	a[0] = n / m;
	for (j = 1; j < 10; j++)
	{
		m /= 10;
		a[j] = (n / m) % 10;
	}
	if (n < 0)
	{
		_putchar('-');
		count++;
		for (j = 0; j < 10; j++)
			a[j] *= -1;
	}
	for (j = 0, sum = 0; j < 10; j++)
	{
		sum += a[j];
		if (sum != 0 || j == 9)
		{
			_putchar('0' + a[j]);
			count++;
		}
	}
	return (count);
}

int pintd(va_list arg)
{
	int a[10];
	int j, m, n, sum, count;

	n = va_arg(arg, int);
	count = 0;
	m = 1000000000;
	a[0] = n / m;
	for (j = 1; j < 10; j++)
	{
		m /= 10;
		a[j] = (n / m) % 10;
	}
	if (n < 0)
	{
		_putchar('-');
		count++;
		for (j = 0; j < 10; j++)
			a[j] *= -1;
	}
	for (j = 0, sum = 0; j < 10; j++)
	{
		sum += a[j];
		if (sum != 0 || j == 9)
		{
			_putchar('0' + a[j]);
			count++;
		}
	}
	return (count);
}	
