#include "function_pointers.h"

/**
 * array_iterator - executes a function
 * @array: array
 * @size: size of the array
 * @action: a pointer to the function
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		array[size] = array[i];
		action(array[size]);
	}
}
