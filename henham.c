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
/**
 * print_s - prints a string
 * @args: string argument
 * Return: number of characters
 */
int print_s(va_list args)
{
	int i = 0, count = 0;
	char *str;

	i = 0;

	str = va_arg(args, char*);
	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		count++;
	}
	return (count);

