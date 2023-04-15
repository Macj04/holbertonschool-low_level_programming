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
	unsigned int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *aux = ht->array[index];

	if (strlen(key) == 0 || ht == NULL)
		return (0);

	while (aux)
	{
		if (strcmp(aux->key, key) == 0)
			return (free(aux->value), aux->value = strdup(value), aux->value == NULL ? 0 : 1);
		aux = aux->next;
	}

	hash_node_t *new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	return (new->key = strdup(key), new->value = strdup(value), new->key == NULL || new->value == NULL ? (free(new->key), free(new->value), free(new), 0) : (new->next = ht->array[index], ht->array[index] = new, 1));
}
