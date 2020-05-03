#include "lists.h"

/**
  * dlistint_len - returns the number of elements a linked list
  *
  * @h: head
  * Return: number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *currentNode;
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
