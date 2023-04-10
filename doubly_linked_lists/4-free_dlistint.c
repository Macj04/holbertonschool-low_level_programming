#include "lists.h"
/**
 * free_dlistint - function that free a dlistint_t
 * @head: ptr to ptr
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *var;

	while (head != NULL)
	{
		var = head;
		head = head->next;
		free(var);
	}
}
