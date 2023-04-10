#include "lists.h"
/**
 * add_dnodeint_end - add a new node at the end of a dlistint_t
 * @head:ptr to ptr to the head node
 * @n:integer value
 * Return: address of the new element or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *end = *head;

	if (new_node)
	{
		new_node->n = n;
		new_node->next = NULL;

		if (*head == NULL)
		{
			*head = new_node;
			new_node->prev = NULL;
		}
		else
		{
			while (end->next != NULL)
				end = end->next;
			end->next = new_node;
			new_node->prev = end;
		}
	}
	else
		free(new_node);
	return (new_node);
}
