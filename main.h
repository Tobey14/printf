#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <strlen.h>


/**
 * @specifiers: Struct format
 * @f: The function associated
 */

typedef struct specifiers
{
	char specifiers;
	int (*f)(va_list arguments);
} specifiers_t;

/*prototypes*/
int _printf(const char *format, ...);


#endif
