#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth
 * node of nth list
 * @head:head of list
 * @index:index of the nodes
 *
 * Return:nth mode,if node does not exist
 * returns null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
	{
		unsigned int i;

		for (i = 0; i < index && head != NULL; i++)
		{
			head = head->next;
		}
		return (head);
	}
