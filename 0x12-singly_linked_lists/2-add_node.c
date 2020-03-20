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
 * add_node - adds a new node at the beginning of a list
 * @head: head
 * @str: string
 * Return: the address of the new element, or NULL if fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	newNode->len = _strlen(newNode->str);

	if (head != NULL && *head != NULL)
	{
		newNode->next = *head;
	}
	*head = newNode;

	return (newNode);
}
