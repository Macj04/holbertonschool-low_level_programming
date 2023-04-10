#include "lists.h"
/**
 * sum_dlistint - return the sum of all the data of a dlistint_t
 * @head:ptr to ptr
 * Return: sum of data (n)
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *var = head;
	int sum = 0;

	while (var)
	{
		sum += var->n;
		var = var->next;
	}
	return (sum);
}
