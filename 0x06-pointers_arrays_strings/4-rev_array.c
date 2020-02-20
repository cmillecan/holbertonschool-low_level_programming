#include "holberton.h"

/**
* reverse_array - reverses the content of an array of integers
* @a: pointer to array
* @n: number of elements of the array
* Return: void
*/

void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0; i < n; i++)
	{
	}

	j = i - 1;
	i = 0;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
