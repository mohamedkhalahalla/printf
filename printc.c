#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * printc - writes the character c to stdout
 * @list: The character's list to print from
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int printc(va_list list)
{
	char c;

	c = (char)va_arg(list, int);
	_putchar(c);
	return (1);
}
