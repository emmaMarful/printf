#include "main.h"
/**
* _printf - main function to print formatted strings
* @format: format string
* Return: will return number of characters to be printed
**/
int _printf(const char *format, ...)
{
	int count = -1;

	if (format != NULL)
	{
		int i;
		va_list v_list;
		int (*o)(va_list);

		va_start(v_list, format);

		if (format[0] == '%' && format[1] == '\0')
			return (-1);

		count = 0;

		for (i = 0; format[i] != '\0'; i++)
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == '%')
				{
					count += _putchar(format[i]);
					i++;
				}
				else if (format[i + 1] != '\0')
				{
					o = _func(format[i + 1]);
					count += (o ? o(v_list) : _putchar(format[i]) + _putchar(format[i + 1]));
					i++;
				}
			}
			else
				count += _putchar(format[i]);
		}
		va_end(v_list);
	}

	return (count);
}
