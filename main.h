#ifndef PRINT_F
#define PRINT_F

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
}con;

/*Main functions*/
int parser(const char *format, con s_list[], va_list va);
int _printf(const char *format, ...);
int _write_char(char);
int p_char(va_list);
int p_string(va_list);
int p_percent(va_list);
int p_integer(va_list);
int p_number(va_list);
int p_binary(va_list);
int p_reversed(va_list va);
int unsigned_integer(va_list);
int p_octal(va_list list);
int p_hex(va_list list);
int p_heX(va_list list);
int rot13(va_list)

#endif
