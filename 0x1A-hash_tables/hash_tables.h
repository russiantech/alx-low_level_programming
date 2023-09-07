#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct hash_node_s - node of our hash table
 * @key: key(uniques, str)
 * @value: val corresponds to a key
 * @next: pointer to next node of the list
 */

typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - data structure for our hash table
 * @size: size of our array
 * @array: array of size @size
 * Each cell in @array is a pointer to the first node of a linked list,
 * so that  our HashTable can use a Chaining collision handling
 */

typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);

/**
 * struct shash_node_s - nodee of  our sorted hash table
 * @key: key in our hash-table(str). always unique.
 * @value: That val that corresponds to a key
 * @next: pointer to the next node of our List
 * @sprev: pointer to previous element of our sorted linked list
 * @snext: pointer to next element of our sorted linked list
 */

typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
	struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - data structure of our sorted hash table
 * @size: size of this array
 * @array: array of size @size
 * Each cell in this array is a pointer to first node of a linked list,
 * since our hash table should use Chaining collision handling
 * @shead: pointer to first element of sorted linked list
 * @stail: pointer to last element of our sorted linked list
 */

typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
} shash_table_t;

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

#endif /* HASH_TABLES_H */
