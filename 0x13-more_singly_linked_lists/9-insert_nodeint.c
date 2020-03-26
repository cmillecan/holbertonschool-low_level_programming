#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

listint_t *h_f(listint_t **head, listint_t *newNode, const unsigned int idx);

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head
 * @idx: index
 * @n: n
 * Return: address of the new node, of NULL if fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	return (h_f(head, newNode, idx));
}

/**
 * h_f - helper function
 * @head: head
 * @newNode: new node
 * @idx: index
 * Return: address of the new node, of NULL if fails
 */
listint_t *h_f(listint_t **head, listint_t *newNode, const unsigned int idx)
{
	listint_t *temp, *currentNode = *head;
	unsigned int count = 1;

	if (head != NULL && *head == NULL)
	{
		if (idx == 0)
		{
			*head = newNode;
			return (newNode);
		}
		free(newNode);
		return (NULL);
	}
	if (idx == 0)
	{
		temp = *head;
		*head = newNode;
		newNode->next = temp;
		return (newNode);
	}
	for (; currentNode->next != NULL; count++, currentNode = currentNode->next)
	{
		if (count == idx)
		{
			temp = currentNode->next;
			currentNode->next = newNode;
			newNode->next = temp;
			return (newNode);
		}
	}
	if (count == idx)
	{
		currentNode->next = newNode;
		return (newNode);
	}
	free(newNode);
	return (NULL);
}
