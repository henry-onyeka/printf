#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"
#include <stddef.h>
/**
 * _printf - recreates the printf function
 * @format: the format string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	if (format != NULL)
{
	int pad = 0, i;
	int (*m)(va_list);
	va_list pr;

	va_start(pr, format);
	i = 0;
	if (format[0] == '%' && format[1] '\0')
	return (-1);
	while (format[i] != '\0' && format != NULL)
{
	if (format[i] == '%')
{
	if (format[i + 1] == '%')
{
	pad = pad + _putchar(format[i]);
	i += 2;
}
	else
{
	m = get_func(format[i + 1]);
	if (m)
	pad = pad + m(pr);
	else
	pad = _putchar(format[i] + _putchar(format[i + 1]);
	i = i + 2;
}
}
else
{
pad += _putchar(format[i]);
	i++;
	}
}
va_end(pr);
return (pad);
	return (-1);
}
