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
typedef struct formatting
{
	char *fm;
	int (*fn)(va_list);
} inputs;

/*prototypes*/
int _printf(const char *format, ...);
int pchar(va_list arg);
int pstring(va_list arg);
int pmod(va_list arg);
int pinti(va_list arg);
int pintd(va_list arg);
int pbinary(va_list arg);
int _putchar(char c);
int pString(va_list arg);
int ppoint(va_list arg);
int pUpper(va_list arg);
int pLower(va_list arg);
int pUnsigned(va_list arg);
int pOctal(va_list arg);

#endif
