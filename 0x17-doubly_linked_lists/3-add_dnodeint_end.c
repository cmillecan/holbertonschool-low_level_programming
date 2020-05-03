#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: head
 * @n: int
 * Return: the address of the new element, of NULL if fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *currentNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	else
	{
		newNode->n = n;
		newNode->next = NULL;
		newNode->prev = newNode->next;
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
