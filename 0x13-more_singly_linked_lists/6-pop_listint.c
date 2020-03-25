#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * pop_listint - deletes the head node of a linked list
 * @head: head
 * Return: n, or 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head != NULL && *head == NULL)
	{
		return (0);
	}

	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (data);
}
