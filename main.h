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
int p_s(va_list v_list);
int p_d(va_list v_list);
int p_i(va_list ar_numlist);
int p_u(va_list v_list);
int p_o(va_list v_list);
int p_x(va_list v_list);
int p_X(va_list v_list);
int p_b(va_list binary_list);

#endif
