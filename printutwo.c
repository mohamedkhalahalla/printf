#include "main.h"

/**
 * printu_h - print unsigned numbers
 * @list: va_list
 * Return: printed amount
 */
int printu_h(va_list list)
{
	short int x, count, return_value = 0, tens = 1, c, num, base = 10;
	unsigned short int i;

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

/**
 * printu_l - print unsigned numbers
 * @list: va_list
 * Return: printed amount
 */
int printu_l(va_list list)
{
	long int x, count, return_value = 0, tens = 1, c, num, base = 10;
	unsigned long int i;

	x = va_arg(list, long int);
	i = x;
	count = no_of_digits_l(i, base);
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
