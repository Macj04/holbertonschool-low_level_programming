#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht:hash table
 * @key: key get
 * Return: value or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	const hash_node_t *aux = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	aux = ht->array[index];
	while (aux != NULL && strcmp(aux->key, key) != 0)
		aux = aux->next;

	return ((aux == NULL) ? NULL : aux->value);
}
