#include "lists.h"
/**
 * dlistint_len - function that return the number of elements in a linked list
 * @h:pointer to head node
 * Return: elements in a linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t m = 0;

	while (h)
	{
		m++;
		h = h->next;
	}
	return (m);
}
