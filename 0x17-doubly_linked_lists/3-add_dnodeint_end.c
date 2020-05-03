#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: head
 * @n: int
 * Return: the address of the new element, of NULL if fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *currentNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}

	currentNode = *head;
	while (currentNode->next)
	{
		currentNode = currentNode->next;
	}
	currentNode->next = newNode;
	newNode->prev = currentNode;

	return (newNode);
}
