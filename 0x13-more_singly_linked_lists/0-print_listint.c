#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of the listint_t list
 * @h: head of a list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n_nodes++;
	}
	return (n_nodes);
}
