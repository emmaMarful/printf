#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* struct convert - a structure for symbols eg. strings,
* integers, chars etc.
* @flg: The flag or operator
* @f: The function
*/

typedef struct convert
{
	char *flg;
	int (*f)(va_list);
} con;

int _putchar(char c);
int pass(const char *format, con s_list[], va_list va);
int _printf(const char *format, ...);
int _w_char(char);
int p_char(va_list);
int p_string(va_list);
int p_percent(va_list);
int p_integer(va_list);
int p_number(va_list);
int p_binary(va_list);
int p_reversed(va_list arg);
int u_integer(va_list);
int p_octal(va_list list);
int p_hex(va_list list);
int p_heX(va_list list);
int rot_13(va_list);
unsigned int base_len(unsigned int, int);
char *rev_string(char *);
void write_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int p_u_number(unsigned int);

#endif
