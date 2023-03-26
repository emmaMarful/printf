#include "main.h"

/**
 * p_number - will print the numbers it recieves
 * @args: arguments list
 * Return: arguments to be printed
 */
int p_number(va_list args)
{
	int n, d, len;
	unsigned int num;

	n  = va_arg(args, int);
	d = 1;
	len = 0;

	if (n < 0)
	{
		len += _write_char('-');
		num = n * -1;
	}
	else
		num = n;

	for (; num / d > 9; )
		d *= 10;

	for (; d != 0; )
	{
		len += _write_char('0' + num / d);
		num %= d;
		d /= 10;
	}

	return (len);
}
/**
 * p_u_number - unsigned number printout
 * @n: unsigned integer to be printed
 * Return: The amount of numbers printed
 */
int p_u_number(unsigned int n)
{
	int d, len;
	unsigned int num;

	d = 1;
	len = 0;

	num = n;

	for (; num / d > 9; )
		d *= 10;

	for (; d != 0; )
	{
		len += _w_char('0' + num / d);
		num %= d;
		d /= 10;
	}

	return (len);
}
