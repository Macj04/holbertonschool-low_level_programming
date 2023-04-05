#include "lists.h"

/**
 * add_note - adds a new node at the beginning of a list_t
 * @head:ptr
 * @str:string
 * Return: address of the new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}


	new_node = malloc(sizeof(list_t));

	if (new_node)
	{
		new_node->str = strdup(str);
		new_node->len = strlen(str);
		new_node->next = *head;
		*head = new_node;
	}
	else
		free(new_node);
	return (new_node);
}
