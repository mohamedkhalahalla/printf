/**
 * no_of_digits - number of digits
 * @i: integer
 * @base: which base
 * Return: number of digits
 */
int no_of_digits(unsigned int i, int base)
{
	int count = 0;

	if (i == 0)
		return (++count);
	while (i > 0)
	{
		i /= base;
		count++;
	}
	return (count);
}

/**
 * no_of_digits_l - number of digits
 * @i: integer
 * @base: which base
 * Return: number of digits
 */
int no_of_digits_l(unsigned long int i, int base)
{
	int count = 0;

	if (i == 0)
		return (++count);
	while (i > 0)
	{
		i /= base;
		count++;
	}
	return (count);
}
