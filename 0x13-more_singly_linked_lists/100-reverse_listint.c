#include  "lists.h"
/**
 * reverse_listint - function that reverses list
 * in a linked list
 * @head:header of a list
 *
 * Return: pointer to a first node
 */
listint_t *reverse_listint(listint_t **head)
	{
		listint_t *p;
		listint_t *n;

		p = NULL;
		n = NULL;

		while (*head != NULL)
		{
			n = (*head)->next;
			(*head)->next = p;
			p = *head;
			*head = n;
		}
		*head = p;
		return (*head);
	}
