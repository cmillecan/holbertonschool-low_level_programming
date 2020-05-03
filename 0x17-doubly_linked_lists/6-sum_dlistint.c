#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data(n) of a linked list
 *
 * @head: head
 * Return: sum of n, 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *currentNode = head;

	if (head == NULL)
	{
		return (0);
	}
	while (currentNode != NULL)
	{
		sum += currentNode->n;
		currentNode = currentNode->next;
	}

	return (sum);
}

