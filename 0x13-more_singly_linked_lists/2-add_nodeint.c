#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @n: n elements
 * @head: head of a list
 * Return: address of the new element. NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
