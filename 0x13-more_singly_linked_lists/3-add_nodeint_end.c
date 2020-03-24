#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: head
 * @n: int
 * Return: the address of the new element, of NULL if fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *currentNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;

	if (head != NULL && *head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	if ((*head)->next == NULL)
	{
		(*head)->next = newNode;
		return (newNode);
	}

	currentNode = (*head)->next;
	while (currentNode->next != NULL)
	{
		currentNode = currentNode->next;
	}
	currentNode->next = newNode;

	return (newNode);
}
