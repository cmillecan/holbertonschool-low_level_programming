#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: head
 * @n: int
 * Return: the address of the new element, or NULL if fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;

	if (head != NULL && *head != NULL)
	{
		newNode->next = *head;
	}
	*head = newNode;

	return (newNode);
}
