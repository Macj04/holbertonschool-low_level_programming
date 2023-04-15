#include "hash_tables.h"
/**
 * hash_table_print - function that print a hash table
 * @ht: hash table
 * Return: Always 0
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int m;
	int flag = 0;
	const hash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	for (m = 0; m < ht->size; m++)
	{
		node = ht->array[m];
		while (node != NULL)
		{
			if (flag != 0)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			flag = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
