#include "main.h"

/**
 * bits - no of bits
 * @i: number
 * Return: number of bits
 */
int bits(unsigned int i)
{
	int x;

	for (x = 0; i > 0; i /= 2, x++)
		;
	return (x);
}

/**
 * printbin - print binary recursively
 * @num: number to be printed
 * Return: nothing
 */
void printbin(unsigned int num)
{
	unsigned int rem;

	rem = num % 2;
	if (num == 0)
		return;
	if (num == 1)
	{
		_putchar(num + '0');
		return;
	}
	printbin(num / 2);
	_putchar(rem + '0');

}

/**
 * printb - converts unsigned int into binary
 * @list: var_list
 * Return: number of digits printed.
 */
int printb(va_list list)
{
	int num, return_value = 0;
	unsigned int i;

	num = va_arg(list, unsigned int);
	i = num;
	if (i == 0)
	{
		_putchar('0');
		return (1);
	}
	(return_value) = bits(i);
	printbin(i);

	return (return_value);
}
