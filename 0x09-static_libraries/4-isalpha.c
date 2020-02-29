#include "holberton.h"
/**
* _isalpha - checks for alphabetic character
* @c: argument
* Return: returns 1 if lowercase or uppercase and 0 if otherwise
*/
int _isalpha(int c)
{
	if (c > 'A' && c < 'Z')
	{
		return (1);
	}
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
