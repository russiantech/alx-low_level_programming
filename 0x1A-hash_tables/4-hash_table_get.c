#include "hash_tables.h"

/**
 * hash_table_get - Gets val belonging to
 *                  a key in our hash table.
 * @ht: pointer to our hash table.
 * @key: key that has the val
 *
 * Return: null for unmatched key else key value in ht(pointer)
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	if (index >= ht->size)
		return (NULL);

	node = ht->array[index];

	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
