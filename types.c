#include "main.h"

/**
 * p_integer - to print integer
 * @list: arguments list
 * Return: return characters
 */

int p_integer(va_list list)
{
	int n_len;

	n_len = p_number(list);
	return (n_len);
}

/**
 * u_integer - to print Unsigned integers
 * @list: argumet list
 * Return: return characters
 */

int u_integer(va_list list)
{
	unsigned int n;

	n = va_arg(list, unsigned int);

	if (n == 0)
		return (p_u_number(n));

	if (n < 1)
		return (-1);
	return (p_u_number(n));
}

/**
 * p_string - to prints  strings
 * @list: arguments to list
 * Return: return characters
 */
int p_string(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_write_char(str[i]);
	return (i);
}

/**
 * p_char - to print character
 * @list: arguments list
 * Return: return characters
 */

int p_char(va_list list)
{
	_write_char(va_arg(list, int));
	return (1);
}

/**
 * p_percent - to prints a percent symbol
 * @list: arguments list
 * Return: rpint characters
 */
int p_percent(__attribute__((unused))va_list list)
{
	_w_char('%');
	return (1);
}
