#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: head
 * @n: int
 * Return: the address of the new element, or NULL if fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;

	if (head != NULL && *head != NULL)
	{
		newNode->prev = NULL;
		newNode->next = *head;
	}
	*head = newNode;

	return (newNode);
}
