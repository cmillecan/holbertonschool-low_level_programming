#include "holberton.h"

/**
* rev_string - reverses a string
* @s: is the string
* Return: void
*/

void rev_string(char *s)
{
	int i;
	char *start;
	char *end;
	char temp;

	i = 0;
	start = s;

	while (s[i] != '\0')
	{
		i++;
	}
	end = s + i - 1;

	while (end > start)
	{
		temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}
