#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: pointer to first element
 * @size: size of array
 * @value: value to search for
 * Return: value, or -1 if NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
