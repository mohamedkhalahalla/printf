#include "main.h"

/**
 * printu - print unsigned numbers
 * @list: va_list
 * Return: printed amount
 */
int printu(va_list list)
{
	int x, count, return_value = 0, tens = 1, c, num, base = 10;
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
