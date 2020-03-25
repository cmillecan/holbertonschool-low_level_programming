#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: head
 * @index: index
 * Return: the nth node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *currentNode = head;
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (currentNode != NULL)
	{
		if (count == index)
		{
			return (currentNode);
		}
		count++;
		currentNode = currentNode->next;
	}

	return (NULL);
}
