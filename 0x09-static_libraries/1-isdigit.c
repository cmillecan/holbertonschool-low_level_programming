#include "holberton.h"
/**
* _isdigit - checks for a digit
* @c: is the digit
* Return: 1 if c is a digit
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
