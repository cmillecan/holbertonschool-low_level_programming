#include "holberton.h"
#include <stdio.h>

/**
* print_diagsums - prints sum of two diagonals
* @a: first argument
* @size: second argument
* Return: void
*/

void print_diagsums(int *a, int size)
{
	int sum = 0;
	int sum2 = 0;
	int i;
	int j;

	for (i = 0; i < size * size; i += (size + 1))
	{
		sum += a[i];
	}
	for (j = size - 1; j <= ((size * size) - size); j += (size - 1))
	{
		sum2 += a[j];
	}

	printf("%d, %d\n", sum, sum2);
}
