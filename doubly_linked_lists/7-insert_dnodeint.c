#include "lists.h"
#include "1-dlistint_len.c"

/**
 * insert_dnodeint_at_index - insert a new node at a given position
 * @h: ptr to ptr
 * @idx:position
 * @n:data
 * Return: address of the new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *var;
	unsigned int m = 0;

	if ((idx != 0 && *h == NULL) || idx > dlistint_len(*h))
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (idx == dlistint_len(*h))
		return (add_dnodeint_end(h, n));

	else
	{
		var = *h;
		for (m = 0; m < idx - 1; m++)
		{
			if (var)
				var = var->next;
		}
	}
	new_node = malloc(sizeof(dlistint_t));
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (var)
	{
		new_node->next = var->next;
		new_node->prev = var;
		var->next = new_node;

		if (new_node->next)
			new_node->next->prev = new_node;
	}
	return (new_node);
}
