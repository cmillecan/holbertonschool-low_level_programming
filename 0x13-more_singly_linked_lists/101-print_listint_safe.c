#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_listint_safe - prints a linked list
 * @head: head
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *currentNode;
	size_t total = 0;

	if (head == NULL)
	{
		exit(98);
	}
	printf("%d\n", head->n);
	total++;

	currentNode = head->next;
	while (currentNode != NULL)
	{
		total++;
		currentNode = currentNode->next;
	}

	return (total);
}
