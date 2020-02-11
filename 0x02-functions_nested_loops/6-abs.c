#include "holberton.h"
/**
* _abs - absolute value of int
* @n: is the integer
* Return: 0
*/
int _abs(int n)
{
	/* check whether n is less than 0*/
	if (n < 0)
	{
		return (-1 * n);
	}
	else
	{
		return (n);
	}
}
