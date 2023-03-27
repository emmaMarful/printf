#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>


/**
* struct convert - a structure for symbols eg. strings,integers etc
* @flg: flag
* @f: function
*/

typedef struct convert
{
	char *flg;
	int (*f)(va_list);
} convert_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list v_list);
int (*_func(char s))(va_list v_list);
int print_s(va_list v_list);
int print_d(va_list v_list);
int print_i(va_list ar_numlist);
int print_u(va_list v_list);
int print_o(va_list v_list);
int print_x(va_list v_list);
int print_X(va_list v_list);
int print_b(va_list binary_list);

#endif
