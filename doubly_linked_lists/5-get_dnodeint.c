#include "lists.h"
/**
 * get_dnodeint_at_index - function that return the nth node of a dlistint_t
 * @head:ptr to ptr
 * @index: search in the list
 * Return: nth or null
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *var = head;
	unsigned int m = 0;

	while (var != NULL)
	{
		if (m == index)
			return (var);
		var = var->next;
		m++;
	}
	return (NULL);
}
