#include "main.h"

/**
 * hex - ascii to hex
 * @c: input
 * Return: 2
 */
static int hex(char c)
{
	int count;
	char diff = 'A' - ':';
	char d[2];

	d[0] = c / 16;
	d[1] = c % 16;
	for (count = 0; count < 2; count++)
	{
		if (d[count] >= 10)
			_putchar('0' + diff + d[count]);
		else
			_putchar('0' + d[count]);
	}
	return (count);
}

/**
 * pString - string
 * @arg: input
 * Return: int
 */
int pString(va_list arg)
{
	unsigned int i;
	int count = 0;
	char *str = va_arg(arg, char *);

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			count += 2;
			count += hex(str[i]);
		}
		else
		{
			_putchar(str[i]);
			count++;
		}
	}
	return (count);
}

/**
 * pmod - modulo print
 * @arg: input
 * Return: int
 */
int pmod(va_list arg)
{
	char c = '%';

	(void) arg;

	_putchar(c);
	return (1);
}

/**
 * punsign - unsigned int
 * @arg: input
 * Return: int
 */
int punsign(va_list arg)
{
	unsigned int a[10];
	unsigned int i, m, n, sum;
	int count;

	n = va_arg(arg, unsigned int);
	m = 1000000000;
	a[0] = n / m;
	for (i = 1; i < 10; i++)
	{
		m /= 10;
		a[i] = (n / m) % 10;
	}
	for (i = 0, sum = 0, count = 0; i < 10; i++)
	{
		sum += a[i];
		if (sum || i == 9)
		{
			_putchar('0' + a[i]);
			count++;
		}
	}
	return (count);
}

/**
 * poct - octal notation
 * @arg: input
 * Return: int
 */
int poct(va_list arg)
{
	unsigned int a[11];
	unsigned int i, m, n, sum;
	int count;

	n = va_arg(arg, unsigned int);
	m = 1073741824;
	a[0] = n / m;
	for (i = 1; i < 11; i++)
	{
		m /= 8;
		a[i] = (n / m) % 8;
	}
	for (i = 0, sum = 0, count = 0; i < 11; i++)
	{
		sum += a[i];
		if (sum || i == 10)
		{
			_putchar('0' + a[i]);
			count++;
		}
	}
	return (count);
}
