#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

unsigned int _strlen(char *s);

/**
* _strlen - returns the length of a string
* @s: is a string
* Return: length of string
*/

unsigned int _strlen(char *s)
{
	unsigned int c = 0;

	while (s[c] != '\0')
		c++;

	return (c);
}

/**
 * new_dog - creates a new dog.
 * @name: first
 * @age: second
 * @owner: third
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int nameL;
	int ownerL;
	int i, j;
	dog_t *new;

	nameL = _strlen(name);
	ownerL = _strlen(owner);

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(dog_t));

	new->name = malloc(sizeof(char) * (nameL + 1));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->owner = malloc(sizeof(char) * (ownerL + 1));
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}

	for (i = 0; *name; i++, name++)
	{
		new->name[i] = *name;
	}
	new->name[i] = '\0';

	for (j = 0; *owner; j++, owner++)
	{
		new->owner[j] = *owner;
	}
	new->owner[j] = '\0';

	new->age = age;

	return (new);
}
