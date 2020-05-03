#include "lists.h"

/**
  * free_dlistint - frees a dlistin_t list
  *
  * @head: head
  * Return: void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;

		free(head->next);
		free(head);
		head = temp;
	}
}
