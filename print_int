#include "main.h"

/**
 * printd_h - print integers
 * @list: list to print from
 * Return: nothing
 */
int printd_h(va_list list)
{
	short int i;
	unsigned short int i2, count, return_value = 0, tens = 1, c, num;

	i = va_arg(list, int);
	if (i < 0)
	{
		_putchar('-');
		(return_value)++;
		i2 = -1 * i;
	}
	else
		i2 = i;
	count = no_of_digits(i2, 10);
	c = count - 1;
	while (c)
	{
		tens *= 10;
		c--;
	}
	while (count)
	{
		num = (i2 / tens) % 10;
		_putchar('0' + num);
		(return_value)++;
		tens /= 10;
		count--;
	}
	return (return_value);
}

/**
 * printd_l - print integers
 * @list: list to print from
 * Return: nothing
 */
int printd_l(va_list list)
{
	long int i;
	unsigned long int i2, count, return_value = 0, tens = 1, c, num;

	i = va_arg(list, long int);
	if (i < 0)
	{
		_putchar('-');
		(return_value)++;
		i2 = -1 * i;
	}
	else
		i2 = i;
	count = no_of_digits_l(i2, 10);
	c = count - 1;
	while (c)
	{
		tens *= 10;
		c--;
	}
	while (count)
	{
		num = (i2 / tens) % 10;
		_putchar('0' + num);
		(return_value)++;
		tens /= 10;
		count--;
	}
	return (return_value);
}
