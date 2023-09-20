#include "main.h"

/**
 * printh - prints hex
 * @i: number to print
 * Return: printed amount
 */
int printh(unsigned int i)
{
	int count, return_value = 0, tens = 1, c, num, base = 16;
	char letter[] = {'a', 'b', 'c', 'd', 'e', 'f'};

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
		if (num > 9)
			_putchar(letter[num - 10]);
		else
			_putchar('0' + num);
		(return_value)++;
		tens /= base;
		count--;
	}
	return (return_value);
}

/**
 * printhex - printhexadecimal
 * @list: var_list
 * Return: printed amount of chars
 */
int printhex(va_list list)
{
	int i, return_value = 0;
	unsigned int i2;

	i = va_arg(list, int);
	i2 = i;
	(return_value) += printh(i2);

	return (return_value);
}
