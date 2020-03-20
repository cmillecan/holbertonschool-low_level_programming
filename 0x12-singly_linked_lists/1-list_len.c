#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the list
 * Return: number of elements
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
size_t list_len(const list_t *h)
{
	list_t *currentNode;
	size_t total = 0;

	if (h == NULL)
	{
		return (0);
	}
	total++;

	currentNode = h->next;
	while (currentNode != NULL)
	{
		total++;
		currentNode = currentNode->next;
	}

	return (total);
}
