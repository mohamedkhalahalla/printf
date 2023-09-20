#include "main.h"

/**
 * tnirp- prints a string in reverse
 * @list : list of arguments
 *
 * Return: number of characters printed
 */
int tnirp(va_list list)
{

	char *s = va_arg(list, char*);
	int i;
	int j = 0;

	if (s == NULL)
		s = "(null)";
	while (s[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchar(s[i]);
	return (j);
}
