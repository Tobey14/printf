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
