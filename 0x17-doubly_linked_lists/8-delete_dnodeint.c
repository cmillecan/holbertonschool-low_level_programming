#include "lists.h"

/**
  * delete_dnodeint_at_index - deletes the node at index of a linked list
  * @head: head
  * @index: index
  * Return: 1 if succeeds, -1 if fails
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i;

	if (head != NULL && *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		if (temp->next->prev == NULL)
			temp->next->prev = NULL;
		*head = temp->next;
	}

	for (i = 0; temp != NULL && i < index - 1; i++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (-1);
	}

	if (temp->next)
		temp->next->prev = temp->prev;
	if (temp->prev)
		temp->prev->next = temp->next;

	free(temp);

	return (1);
}
