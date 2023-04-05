#include "lists.h"

/**
 * list_len - function that return the numberof elements in a linkend list_t
 * @h: ptr to linked
 * Return: elements in a linked list_t
 */

size_t list_len(const list_t *h)
{
	size_t m = 0;

	while (h)
	{
		h = h->next;
		m++;
	}
	return (m);
}
