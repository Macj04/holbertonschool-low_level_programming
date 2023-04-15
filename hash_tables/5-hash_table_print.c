#include "hash_tables.h"
/**
 * hash_table_print - function that print a hash table
 * @ht: hash table
 * Return: Always 0
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int m;
	const hash_node_t *aux;

	if (ht == NULL)
		return;

	printf("{");
	for (m = 0; m < ht->size; m++)
	{
		if (ht->array[m] != NULL)
		{
			aux = ht->array[m];
			while (aux)
			{
				printf("%s'%s': '%s'", (aux == ht->array[m]) ? "" : ", ", aux->key, aux->value);
				aux = aux->next;
			}
		}
	}
	printf("}\n");
}
