#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * free_listint2 - frees a list
 * @head: head
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		temp = (*head)->next;


		if ((*head)->next != NULL)
		{
			free((*head)->next);
		}
		free(*head);
		*head = temp;
	}
	head = NULL;
}
