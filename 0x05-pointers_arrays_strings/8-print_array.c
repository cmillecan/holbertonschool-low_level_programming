#include "holberton.h"
#include <stdio.h>

/**
* print_array - prints elements of an array of integers
* @a: point
* @n: number of elements
* Return: void
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *a++);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
