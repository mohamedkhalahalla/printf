#include "main.h"

/**
 * printp - prints the memory address in hexadecimal form.
 * @list: arguments.
 * Return: number of arguments printed
 */
int printp(va_list list)
{
	void *ptr;
	char *str = "(nil)";
	unsigned long int a;
	int b, i;

	ptr = va_arg(list, void *);
	if (!ptr)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		return (i);
	}

	a = (unsigned long int)ptr;
	_putchar('0');
	_putchar('x');
	b = printh_l(a);
	return (b + 2);
}
