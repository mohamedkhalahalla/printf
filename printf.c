#include "main.h"

/**
 * ifcheck - check
 * @ch: char
 * Return: count
 */
int ifcheck(char ch)
{
	int return_value = 0;

	if (ch == '%')
	{
		_putchar('%'), (return_value)++;
	}
	else
	{
		 _putchar('%'), _putchar(ch), (return_value) += 2;
	}
	return (return_value);
}

/**
 * _printf - sends formatted output to stdout
 * @format: text to be written to stdout
 *
 * Return: total number of characters written
 * on failure, a negative number is returned
 */
int _printf(const char *format, ...)
{
	int count = 0, return_value = 0, (*f)(va_list);
	va_list list;

	va_start(list, format);

	if (!format)
		return (-1);
	while (format && format[count])
	{
		if (format[count] == '%')
		{
			f = check(format, ++count);
			if (format[count] == '\0' || (format[count] == ' ' && !format[count + 1]))
				return (-1);
			else if (f)
				(return_value) += f(list);

			else
				(return_value) += ifcheck(format[count]);
			count += check2(format, count);
		}
		else
		{
			_putchar(format[count]), (return_value)++;
		}
		count++;
	}

	va_end(list);
	return (return_value);
}
