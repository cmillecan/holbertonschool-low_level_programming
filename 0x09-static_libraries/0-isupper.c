#include "holberton.h"
/**
* _isupper - checks for uppercase character
* @c: is the character
* Return: 1 if uppercase, 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
