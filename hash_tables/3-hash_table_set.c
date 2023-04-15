#include "hash_tables.h"
/**
 * hash_table_set - function that add an element to the hash table
 * @ht: hash table to modify
 * @key:key to add or update
 * @value:value to asociate with the key
 * Return: 1 or 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index = 0;
	char *val = NULL;
	hash_node_t *aux = NULL;
	hash_node_t *new = NULL;

	if (strlen(key) == 0 || ht == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);

	aux = ht->array[index];
	while (aux)
	{
		if (strcmp(aux->key, key) == 0)
		{
			val = strdup(value);
			if (val == NULL)
				return (0);
			free(aux->value);
			aux->value = val;
			return (1);
		}
		aux = aux->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
