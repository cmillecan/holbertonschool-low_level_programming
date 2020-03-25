#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * reverse_listint - reverses a linked list
 * @head: head
 * Return: 0
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *newHead = 0, *next;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = newHead;
		newHead = *head;
		*head = next;
	}
	return (newHead);
}
