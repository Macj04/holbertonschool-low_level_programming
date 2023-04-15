#include "hash_tables.h"
/**
 * hash_table_delete - 
 * @ht: hash table
 * Return: Void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int m;
	hash_node_t *aux = NULL, *tofree = NULL;

	if (ht == NULL)
		return;

	for (m = 0; m < ht->size; m++)
	{
		aux = ht->array[m];
		while (aux)
		{
			tofree = aux;
			aux = aux->next;
			free(tofree->key), free(tofree->value), free(tofree);
		}
	}
	free(ht->array), free(ht);
}
