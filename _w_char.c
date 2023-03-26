#include "main.h"

/**
 * _w_char - writes the character c to stdout
 * @ch: the character to print
 * Return: if true return 1 else false
 */
int _w_char(char ch)
{
	return (write(1, &ch, 1));
}
