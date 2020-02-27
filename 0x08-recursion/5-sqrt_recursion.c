#include "holberton.h"

int helper_sqrt(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (helper_sqrt(n, 0));
}

/**
 * helper_sqrt - helper function to _sqrt_recursion..
 * @n: number
 * @i: integer
 * Return: int
 */

int helper_sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}

	return (helper_sqrt(n, i + 1));
}
