#include "main.h"

/**
 * printh_h - prints hex
 * @i: number to print
 * Return: printed amount
 */
int printh_h(unsigned short int i)
{
	short int count, return_value = 0, tens = 1, c, num, base = 16;
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
 * printhex_h - printhexadecimal
 * @list: var_list
 * Return: printed amount of chars
 */
int printhex_h(va_list list)
{
	short int i, return_value = 0;
	unsigned short int i2;

	i = va_arg(list, int);
	i2 = i;
	(return_value) += printh_h(i2);

	return (return_value);
}


/**
 * printh_l - prints hex
 * @i: number to print
 * Return: printed amount
 */
int printh_l(unsigned long int i)
{
	long int count, return_value = 0, tens = 1, c, num, base = 16;
	char letter[] = {'a', 'b', 'c', 'd', 'e', 'f'};

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
 * printhex_l - printhexadecimal
 * @list: var_list
 * Return: printed amount of chars
 */
int printhex_l(va_list list)
{
	long int i, return_value = 0;
	unsigned long int i2;

	i = va_arg(list, long int);
	i2 = i;
	(return_value) += printh_l(i2);

	return (return_value);
}
