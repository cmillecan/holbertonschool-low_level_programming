#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int _strlen(char *);

/**
 * _strlen - gets the length of a string
 * @str: string
 * Return: int
 */
int _strlen(char *str)
{
	int i;

	if (str == NULL)
	{
		return (0);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
	}

	return (i);
}

/**
 * add_node_end - adds a new node at the end of a list
 * @head: pointer
 * @str: string
 * Return: the address of the new element, or NULL if fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *currentNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	newNode->len = _strlen(newNode->str);

	if (*head == NULL)
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
