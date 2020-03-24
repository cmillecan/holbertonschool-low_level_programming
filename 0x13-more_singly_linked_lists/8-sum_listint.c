#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * sum_listint - returns the sum of all the data(n) of a linked list
 * @head: head
 * Return: sum of n, 0 if empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	temp = head;
	if (head == NULL)
	{
		return (0);
	}
	while (temp != NULL)
	{
		sum++;
		temp = temp->n;	
	}

	return (sum);
}
