#include "main.h"

/**
 * print_rot13 - prints the rot13 equivalent of the string
 * @list: list of arguments
 * Return: number of characters printed
 */

int print_rot13(va_list list)
{
	int i, j;
	char alphabet[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char rlphbet[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";
	char *str;

	str = va_arg(list, char *);
	if (!str)
		str = "(null)";
	for (i = 0; str[i]; ++i)
	{
		for (j = 0; alphabet[j]; ++j)
		{
			if (alphabet[j] == str[i])
			{
				_putchar(rlphbet[j]);
				break;
			}
		}
		if (!alphabet[j])
			_putchar(str[i]);
	}
	return (i);
}
