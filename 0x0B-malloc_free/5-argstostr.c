#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

int str_count(char *);

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: int
 * @av: char
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int i;
	int j;
	int k;
	int sum;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	sum = 0;
	for (i = 0; i < ac; i++)
	{
		sum += str_count(av[i]) + 1;
	}

	s = malloc(sizeof(char) * (sum + 1));
	if (s == NULL)
	{
		return (NULL);
	}

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
		k++;
	}

	s[k] = '\0';

	return (s);
}

/**
 * str_count - counts the string
 * @str: string
 * Return: int
 */

int str_count(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	;

	return (i);
}

