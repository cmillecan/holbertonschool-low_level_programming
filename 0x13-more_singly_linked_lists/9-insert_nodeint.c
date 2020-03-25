#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head
 * @idx: index
 * @n: n
 * Return: address of the new node, of NULL if fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *temp, *currentNode = *head;
	unsigned int count = 1;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
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
		temp = (*head)->next;
		*head = newNode;
		newNode->next = temp;
		return (newNode);
	}
	while (currentNode != NULL)
	{
		if (count == idx)
		{
			temp = currentNode->next;
			currentNode->next = newNode;
			newNode->next = temp;
			return (newNode);
		}
		count++;
		currentNode = currentNode->next;
	}
	free(newNode);
	return (NULL);
}
