#include "main.h"

/**
 * pint_unsigned - unsignedint
 * @arg: input
 * Return: int
 */
int pUnsigned(va_list arg)
{
	int j, m, num, count;

	num = va_arg(arg, int);
	count = 0;
    j=0;


    int length = (int)floor(log10((float)num)) + 1;
    char *arr[length];
    int i = 0;
	
	while (num != 0)
	{
		arr[i] = num % 10;
        num /= 10;
        i++;
	}

    while (arr != '\0')
	{
        count++;
        _putchar('0' + arr[j]);
        j++;
	}
	return (count);
}


/**
 * pint_unsigned - unsignedint
 * @arg: input
 * Return: int
 */
int pOctal(va_list arg)
{
	int j, m, num, count;

	num = va_arg(arg, int);
	count = 0;
    j=0;


    int length = (int)floor(log10((float)num)) + 1;
    char *arr[length];
    int i = 0;
	
	while (num != 0 && num >= 8)
	{
		arr[i] = num % 8;
        num /= 8;
        i++;
	}

    while (arr != '\0')
	{
        count++;
        _putchar('0' + arr[j]);
        j++;
	}
	return (count);
}


