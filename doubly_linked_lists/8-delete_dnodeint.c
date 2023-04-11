#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t
 * @head:ptr to ptr
 * @index:position to delete
 * Return: 1 succeeded, -1 failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *remove = *head;
	unsigned int m = 0;

	if (*head)
	{
		for (m = 0; m < index && remove; m++)
			remove = remove->next;
		if (m == index)
		{
			if (m == 0)
				*head = (*head)->next;
			if (remove->next)
				remove->next->prev = remove->prev;
			if (remove->prev)
				remove->prev->next = remove->next;
			remove->next = NULL;
			remove->prev = NULL;
			free(remove);
			return (1);
		}
	}
	return (-1);
}
