#include "lists.h"

/**
 * pop_listint - function that deletes the head
 * nodes of a list
 * @head: head of a list
 *
 * Return:head node's date
 */
int pop_listint(listint_t **head)
	{
		int node;
		listint_t *h;
		listint_t *curr;

		if (*head == NULL)
			return (0);

		curr = *head;

		node = curr->n;
		h = curr->next;
		free(curr);
		*head = h;
		return (node);
	}
