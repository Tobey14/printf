#include "main.h"

/**
 * phex - hexidecimal
 * @n: int
 * @c: case to print
 * Return: int
 */
int phex(unsigned int n, unsigned int c)
{
	unsigned int a[8];
	unsigned int i, m, sum;
	char diff;
	int count;

	m = 268435456; /* (16 ^ 7) */
	if (c)
		diff = 'A' - ':';
	else
		diff = 'a' - ':';
	a[0] = n / m;
	for (i = 1; i < 8; i++)
	{
		m /= 16;
		a[i] = (n / m) % 16;
	}
	for (i = 0, sum = 0, count = 0; i < 8; i++)
	{
		sum += a[i];
		if (sum || i == 7)
		{
			if (a[i] < 10)
				_putchar('0' + a[i]);
			else
				_putchar('0' + diff + a[i]);
			count++;
		}
	}
	return (count);
}

/**
 * pLower - hex notation
 * @arg: unsigned int to prit
 * Return: int
 */
int pLower(va_list arg)
{
	return (phex(va_arg(arg, unsigned int), 0));
}

/**
 * pUpper -  hex notation
 * @arg: unsigned int to print
 * Return: int
 */
int pUpper(va_list arg)
{
	return (phex(va_arg(arg, unsigned int), 1));
}

/**
 * _pow - exp cal
 * @base: exp base
 * @exponent: exp 
 * Return: long
 */
static unsigned long _pow(unsigned int base, unsigned int exponent)
{
        unsigned int i;
        unsigned long ans = base;

        for (i = 1; i < exponent; i++)
        {
                ans *= base;
        }
        return (ans);
}

/**
 * ppoint - pointer
 * @arg: input
 * Return: int
 */
int ppoint(va_list arg)
{
	int count = 0;
	unsigned int a[16];
	unsigned int i, sum;
	unsigned long n, m;
	char *str = "(nil)";

	n = va_arg(arg, unsigned long);
	if (n == 0)
	{
		for (i = 0; str[i]; i++)
		{
			_putchar(str[i]);
			count++;
		}
		return (count);
	}
	_putchar('0');
	_putchar('x');
	count = 2;
	m = _pow(16, 15); /* 16 ^ 15 */
	a[0] = n / m;
	for (i = 1; i < 16; i++)
	{
		m /= 16;
		a[i] = (n / m) % 16;
	}
	for (i = 0, sum = 0; i < 16; i++)
	{
		sum += a[i];
		if (sum || i == 15)
		{
			if (a[i] < 10)
				_putchar('0' + a[i]);
			else
				_putchar('0' + ('a' - ':') + a[i]);
			count++;
		}
	}
	return (count);
}
