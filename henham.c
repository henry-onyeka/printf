#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"
/**
 * print_c - prints charcter
 * @args: character arguments
 * Return: returns a character
 *
 */
int print_c(va_list args)
{
	int c;

	c = va_arg(args, int);

	return (_putchar(c));
}

