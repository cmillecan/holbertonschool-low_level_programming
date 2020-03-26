#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: head
 * @index: index
 * Return: 1 if succeeds, -1 if fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *next;
	unsigned int i;

	if (head != NULL && *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	for (i = 0; temp != NULL && i < index - 1; i++)
	{
		temp = temp->next;
	}

	if (temp == NULL || temp->next == NULL)
	{
		return (-1);
	}

	next = temp->next->next;
	free(temp->next);

	temp->next = next;

	return (1);
}
