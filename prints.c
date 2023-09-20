#include "main.h"

/**
 * printS - print special string
 * @list: list of arguments
 * Return: printed amount
 */
int printS(va_list list)
{
	int length = 0, return_value;
	char *string;

	string = va_arg(list, char *);
	if (!string)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (string[length] != '\0')
	{
		if (string[length] < 32 || string[length] >= 127)
		{
			_putchar('\\'), _putchar('x');
			if (string[length] < 16)
				_putchar('0'), printH(string[length]);
			else
				printH(string[length]);
			(return_value) += 4;
		}
		else
			_putchar(string[length]), (return_value)++;
		length++;
	}
	return (return_value);
}
