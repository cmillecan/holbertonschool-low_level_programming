#include "search_algos.h"

/**
 * helper_func - binary search
 * @array: pointer to the first element of the array
 * @first: first int
 * @last: last int
 * @value: value to search for
 * Return: value
 */
int helper_func(int *array, int first, int last, int value)
{
	int i, middle;

	printf("Searching in array:");
	for (i = first; i <= last; i++)
	{
		if (i == first)
			printf(" %d", array[i]);
		else
			printf(", %d", array[i]);
	}
	printf("\n");

	if ((last == first) && (value != array[first]))
		return (-1);

	middle = first + ((last - first) / 2);
	if (value == array[middle])
		return (middle);
	if (value < array[middle])
		return (helper_func(array, first, middle - 1, value));
	else
		return (helper_func(array, middle + 1, last, value));
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: value, or -1 if NULL
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (helper_func(array, 0, size - 1, value));
}
