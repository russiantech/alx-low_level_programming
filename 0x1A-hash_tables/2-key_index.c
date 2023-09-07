#include "hash_tables.h"

/**
 * key_index - index where a key/value
 *      pair should be in array of a hash table.
 * @key: key with the index.
 * @size: size of hash table array
 *
 * Return: key index
 * Description:The use of djb2 algorithm.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
