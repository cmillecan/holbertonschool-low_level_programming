#include "lists.h"

/**
  * get_dnodeint_at_index - returns the nth node of a linked list
  * @head: head
  * @index: index
  * Return: nth node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *currentNode = head;
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (currentNode != NULL)
	{
		if (count == index)
		{
			return (currentNode);
		}
		count++;
		currentNode = currentNode->next;
	}

	return (NULL);
}
