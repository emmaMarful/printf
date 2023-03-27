#include "main.h"

/**
* p_d - Print decimal (Base 10) digits (%d)
* @v_list: Store the value of arguments
* Return: Counter print numbers
*/
int p_d(va_list v_list)
{
	unsigned int num_Absolute, aux_Num, count_Zero, count;
	int numbers;

	count = 0;

	numbers = va_arg(v_list, int);

	if (numbers < 0)
	{
		num_Absolute = (numbers * -1);
		count += _putchar(45);
	}
	else
		num_Absolute = numbers;

	aux_Num = num_Absolute;
	count_Zero = 1;
	while (aux_Num > 9)
	{
		aux_Num /= 10;
		count_Zero *= 10;
	}

	while (count_Zero >= 1)
	{
		count += _putchar(((num_Absolute / count_Zero) % 10) + '0');
		count_Zero /= 10;
	}
	return (count);
}
/**
* p_i - Print the integers (%i)
* @v_list: Store list numbers
* Return: Number print
*/
int p_i(va_list v_list)
{
	return (p_d(v_list));
}
