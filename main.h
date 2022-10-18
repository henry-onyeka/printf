#ifndef _MAIN_H
#define _MAIN_H
#include <stdio.h>

#include <stdarg.h>
int _printf(const char *format, ...);
int print_c(va_list args);

int print_s(va_list args);

int print_d(va_list args);

int print_i(va_list args);

int _putchar(char c);

int print_percent(va_list args);

int (*get_func(char x))(va_list args);
int print_rev(va_list va);
int hexa_special(unsigned int c);
int stringhexa(va_list va);
int pointer(va_list va);
int hexa_pointer(unsigned long int c);
int binary(va_list va);
int print_unsigned(va_list va);
int hexa(va_list va);
int hexa_upper(va_list va);
int octal(va_list va);
int print_rot(va_list va);
char *malloc_str(char *str);
char *rot13(char *p);

typedef struct specifier
{
	char *valid;
	int (*f)(va_list);
}spec;

#endif
