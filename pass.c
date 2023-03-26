#include "main.h"

/**
 * parser - gets the main string and the other arguments
 * @format: format string
 * @s_list: A list of all the posible functions.
 * @va: A list containing all the argumentents passed to the program.
 * Return: will return number of characters printed
 */
int parser(const char *format, con s_list[], va_list va)
{
	int i, j, rval, p_char;

	p_char = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; s_list[j].flg != NULL; j++)
			{
				if (format[i + 1] == s_list[j].flg[0])
				{
					rval = s_list[j].f(va);
					if (rval == -1)
						return (-1);
					p_char += rval;
					break;
				}
			}
			if (s_list[j].flg == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_w_char(format[i]);
					_w_char(format[i + 1]);
					p_char = p_char + 2;
				}
				else
					return (-1);
			}
			i = i + 1;
		}
		else
		{
			_w_char(format[i]);
			p_char++;
		}
	}
	return (p_char);
}
