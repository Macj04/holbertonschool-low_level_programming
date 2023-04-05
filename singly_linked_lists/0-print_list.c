#include "lists.h"

/**
 * print_list - print all the elements of a list_t
 * @h:ptr
 * Return: nodes
 */
size_t print_list(const list_t *h)
{
	size_t m = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		m++;
	}
	return (m);
}
