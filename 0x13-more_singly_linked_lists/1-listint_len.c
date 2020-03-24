#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	listint_t *currentNode;
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
