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

/**
 * pintd - int
 * @arg: input
 * Return: int
 */
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

/**
 * pbinary - int
 * @arg: input
 * Return: int
 */
int pbinary(va_list arg)
{
	unsigned int n, m, i, sum;
	unsigned int a[32];
	int count;

	n = va_arg(arg, unsigned int);
	m = 2147483648; /* (2 ^ 31) */
	a[0] = n / m;
	for (i = 1; i < 32; i++)
	{
		m /= 2;
		a[i] = (n / m) % 2;
	}
	for (i = 0, sum = 0, count = 0; i < 32; i++)
	{
		sum += a[i];
		if (sum || i == 31)
		{
			_putchar('0' + a[i]);
			count++;
		}
	}
	return (count);
}

