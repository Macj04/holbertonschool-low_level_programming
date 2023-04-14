#include "hash_tables.h"
/**
 * hash_table_create - function that create a hash table
 * @size: size
 * Return: New or Null
 */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for
 *
 * Return: Always EXIT_SUCCESS.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int m = 0;
	hash_table_t *new;

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);

	new->array = malloc(size * sizeof(hash_node_t *));
	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}
	new->size = size;
	for (m = 0; m < size; m++)
		new->array[m] = NULL;
	return (new);
}
