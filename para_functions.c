#include "main.h"

int pchar(va_list arg)
{
	char c = va_arg(arg, int);

	write(1, &c, 1);
	return (1);
}

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

