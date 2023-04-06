#include "lists.h"
/**
 * free_list - function that free a list_t
 * @head:head
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *crt = head;
	list_t *next;

	while (crt != NULL)
	{
		next = (crt != NULL) ? crt->next : NULL;
		free(crt->str);
		free(crt);
		crt = next;
	}
}
