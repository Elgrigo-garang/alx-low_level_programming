#include "lists.h"
/**
 * sum_listint - returns the sum of all
 * data in (n)
 * @head: header of the node
 *
 * Return:sum of all data (n)
 */
int sum_listint(listint_t *head)
	{
		int i;

		i = 0;
		while (head != NULL)
		{
			i += head->n;
			head = head->next;
		}
		return (i);
	}
