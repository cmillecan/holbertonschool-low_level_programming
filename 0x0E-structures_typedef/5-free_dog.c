#include <stdio.h>
#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: first
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d);
}
