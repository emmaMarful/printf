#include "main.h"

/**
 * p_c - print char
 * @v_list: save char list
 * Return: arguments num
 */
int p_c(va_list v_list)
{
	int c = va_arg(v_list, int);

	return (_putchar(c));
}

/**
* p_s - print string
* @v_list: svae list of characters
* Return: arguments num
*/
int p_s(va_list v_list)
{
	int i, count = 0;
	char *str;

	str = va_arg(v_list, char *);
	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; i++)
		count += _putchar(str[i]);

	return (count);
}
