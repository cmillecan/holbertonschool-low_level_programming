#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

void print_node(list_t);

/**
 * print_node - prints node
 * @node: is a node
 * Return: void
 */
void print_node(list_t node)
{
	if (node.str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		printf("[%d] %s\n", node.len, node.str);
	}
}

/**
 * print_list - prints all the elements of a list_t list
 * @h: head
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	list_t *currentNode;
	size_t total = 0;

	if (h == NULL)
	{
		return (0);
	}
	print_node(*h);
	total++;

	currentNode = h->next;
	while (currentNode != NULL)
	{
		print_node(*currentNode);
		total++;
		currentNode = currentNode->next;
	}

	return (total);
}
