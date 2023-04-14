#include "hash_tables.h"
/**
 * key_index - fuction that gives you the index of a key
 * @key:key
 * @size:size
 * Return: size
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (size == 0)
		return (0);
	return (hash_djb2(key) % size);
}
