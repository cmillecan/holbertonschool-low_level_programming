#include "holberton.h"
/**
* _islower - checks for lowercase character
* @c: argument
* Return: returns 1 if lowercase and 0 if otherwise
*/
int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
