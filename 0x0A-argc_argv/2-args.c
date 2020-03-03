#include "holberton.h"
#include <stdio.h>

/**
 * main - prints all arguments received
 * @argc: argument count
 * @argv: array of pointers to a string
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
