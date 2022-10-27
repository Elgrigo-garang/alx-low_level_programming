#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint - adds new node at the begging
 * of a listint_t list
 * @head: a pointer to the address
 * @n: integer of a new node
 * Return:if the function fails - NULL.
 * otherwise - the address of the new elements
 */
listint_t *add_nodeint(listint_t **head, const int n)
	{
		listint_t *new;

		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n;
		new->next = *head;

		*head = new;

		return (new);
	}
