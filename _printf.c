#include "main.h"

/**
 * _printf - main function to print formatted strings
 * @format: format string
 * Return: will return number of characters printed
 */
int _printf(const char *format, ...)
{
	int num_char;
	con s_list[] = {
		{"c", p_char},
		{"s", p_string},
		{"%", p_percent},
		{"i", p_integer},
		{"d", p_integer},
		{"b", p_binary},
		{"r", p_reversed},
		{"R", rot_13},
		{"u", unsigned_integer},
		{"o", p_octal},
		{"x", p_hex},
		{"X", p_heX},
		{NULL, NULL}
	};
	va_list va;

	if (format == NULL)
		return (-1);

	va_start(va, format);
	/*pass function called*/
	num_char = pass(format, s_list, va);
	va_end(va);
	return (num_char);
}
