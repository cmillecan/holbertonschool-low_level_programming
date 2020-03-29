#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: int
 * @index: index
 *
 * Return: the value of the bit at index
 * On error, return -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
	{
		return (-1);
	}
	if ((n & (1 << index)) == (unsigned long int)(1 << index))
	{
		return (1);
	}

	return (0);
}
