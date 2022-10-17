#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct specifiers - Struct format
 * @fm: char
 * @fn: The function associated
 */
typedef struct specifiers
{
	char fm;
	int (*fn)(va_list);
} inputs;

/*prototypes*/
int _printf(const char *format, ...);
int pchar(va_list arg);
int pstring(va_list arg);

#endif
