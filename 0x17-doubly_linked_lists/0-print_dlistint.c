#include "lists.h"

/**
  * print_dlistint - prints all the elements of a dlistint_t list
  *
  * @h: head
  * Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *currentNode;
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
