#include "holberton.h"
#include <math.h>
#include <stdlib.h>

unsigned int two_to_power(unsigned int pwr);

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: points to a string of 0 and 1 chars
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i, length;

	if (b == NULL)
	{
		return (0);
	}
	for (length = 0; b[length] != '\0'; length++)
	{
	}
	length--;
	for (i = length; i >= 0; i--)
	{
		switch (b[i])
		{
			case ('0'):
				break;
			case ('1'):
				num += two_to_power(length - i);
				break;
			default:
				return (0);
		}
	}

	return (num);
}

/**
 * two_to_power - returns 2 to the power of an int
 * @pwr: power
 *
 * Return: product
 */
unsigned int two_to_power(unsigned int pwr)
{
	unsigned int product, i;

	product = 1;
	for (i = 0; i < pwr; i++)
	{
		product *= 2;
	}

	return (product);
}
