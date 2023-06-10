#include "hash_tables.h"

/**
 * key_index - Retains the index at which a key/value(s)
 *      pair should be stored in array of a hash table.
 * @key: Repesents the key to get the index of/from
 * @size: Represents the size of the array of the hash table.
 *
 * Return: To the index of the key.
 * Description: Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
