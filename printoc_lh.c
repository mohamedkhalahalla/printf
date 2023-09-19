#include "main.h"

/**
 * printo_h - print octal
 * @list: list of args
 * Return: printed amount
 */
int printo_h(va_list list)
{
	short int x, count, return_value = 0, tens = 1, c, num, base = 8;
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
		if (num < 0)
			num *= -1;
		_putchar('0' + num);
		(return_value)++;
		tens /= base;
		count--;
	}
	return (return_value);
}

#include "main.h"

/**
 * printo_l - print octal
 * @list: list of args
 * Return: printed amount
 */
int printo_l(va_list list)
{
	long int x, count, num, return_value = 0, tens = 1, c, base = 8;
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
		if (num < 0)
			num *= -1;
		_putchar('0' + num);
		(return_value)++;
		tens /= base;
		count--;
	}
	return (return_value);
}
