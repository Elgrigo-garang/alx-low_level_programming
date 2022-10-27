#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end
 * of a list
 * @head: head of a list
 * @n:new element
 *
 * Return: address of a new ellemnts
 * NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
	{
		listint_t *new;
		listint_t *temp;

		(void)temp;

		new = malloc(sizeof(listint_t));

		if (new == NULL)
			return (NULL);

		new->n = n;
		new->next = NULL;
		temp = *head;
		if (*head == NULL)
		{
			*head = new;
		}
		else
		{
			while (temp->next != NULL)
			{
				temp = temp->next;
			}
		}
		return (*head);
	}