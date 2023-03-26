#ifndef PRINT_F
#define PRINT_F

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* struct convert - flag
*
* @flg: The operator
* @f: The function associated
*/
struct convert
{
	char *flg;
	int (*f)(va_list);
};
typedef struct convert con;

/*Main functions*/
int pass(const char *format, conver_t f_list[], va_list va);
int _prntf(const char *format, ...);
int _w_char(char);
int p_char(va_list);
int p_string(va_list);
int p_percent(va_list);
int p_integer(va_list);
int p_number(va_list);
int p_binary(va_list);
int p_reversed(va_list arg);
int rot_13(va_list);
int u_integer(va_list);
int p_octal(va_list list);
int p_hex(va_list list);
int p_heX(va_list list);

/*Helper functions*/
unsigned int base_len(unsigned int, int);
char *rev_string(char *);
void write_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int p_u_number(unsigned int);


#endif
