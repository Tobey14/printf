#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{


    _printf("Let's try to printf a simple sentence.\n");
    printf("Let's try to printf a simple sentence.\n");

    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
     _printf("Percent:[%%]\n");
    printf("Percent:[%%]\n");

    _printf("My test\n");
    printf("My test\n");
    _printf("gonna do 2 chara [%c] and [%c] and [%s]\n",'b','a',"words");
    printf("gonna do 2 chara [%c] and [%c] and [%s]\n",'b','a',"words");

	printf("also try %%%%\n");
	_printf("also try %%%%\n");

	printf("%%%\n");
        _printf("%%%\n");

    return (0);
}
