#include "main.h"
/**
* _func - search and return the correct function
* @s: reviews array
* Return: returns the function
**/
int (*_func(char s))(va_list)
{
	convert_t con[] = {
		{"c", p_c},
		{"s", p_s},
		{"d", p_d},
		{"i", p_i},
		{"b", p_b},
		{NULL, NULL}
	};

	int i;

	for (i = 0; con[i].c != NULL; i++)
	{
		if (*con[i].c == s)
			return (con[i].f);
	}
	return (NULL);
}
