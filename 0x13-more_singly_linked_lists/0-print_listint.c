#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_listint - prints all the elements of a list
 * @h: pointer
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	listint_t *currentNode;
	size_t total = 0;

	if (h == NULL)
	{
		return (0);
	}
	printf("%d\n", h->n);
	total++;

	currentNode = h->next;
	while (currentNode != NULL)
	{
		printf("%d\n", currentNode->n);
		total++;
		currentNode = currentNode->next;
	}

	return (total);
}
