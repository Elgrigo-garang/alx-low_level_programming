#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements in the link lists.
 * @h:head of the elements
 *
 * Return:the number of nodes
 */
size_t print_listint(const listint_t *h)
	{
		size_t nodes = 0;

		while (h)
		{
			nodes++;
			printf("%d\n", h->n);
			h = h->next;
		}
		return (nodes);
	}
