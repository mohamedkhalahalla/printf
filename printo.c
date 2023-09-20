#include "main.h"

/**
 * printo - print octal
 * @list: list of args
 * Return: printed amount
 */
int printo(va_list list)
{
	int x, count, return_value = 0, tens = 1, c, num, base = 8;
	unsigned int i;

	x = va_arg(list, int);
	i = x;
	count = no_of_digits(i, base);
	c = count - 1;
	while (c)
	{
		tens *= base;
		c--;
	}
	while (count)
	{
		num = (i / tens) % base;
		_putchar('0' + num);
		(return_value)++;
		tens /= base;
		count--;
	}
	return (return_value);
}
