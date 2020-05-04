#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head
 * @idx: index
 * @n: n
 * Return: address of the new node, or NULL if fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode;
	dlistint_t *currentNode = *h;
	unsigned int count = 1;

	if (h == NULL)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	if (idx == 0)
	{
		*h = newNode;
		currentNode->prev = NULL;
		newNode->next = currentNode;
		return (newNode);
	}
	for (; count < idx; count++)
	{
		currentNode = currentNode->next;
		if (currentNode == NULL)
		{
			free(newNode);
			return (NULL);
		}
	}
	newNode->prev = currentNode;
	newNode->next = currentNode->next;
	if (currentNode->next)
	{
		currentNode->next->prev = newNode;
		return (newNode);
	}
	currentNode->next = newNode;

	return (newNode);
}

