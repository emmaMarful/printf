#include "main.h"
/**
* _func - search and return the correct function
* @s: reviews array
* Return: returns the function
**/
int (*_func(char s))(va_list)
{
	convert_t con[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_d},
		{"i", print_i},
		{"b", print_b},
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
