#include "hash_tables.h"

/**
<<<<<<< HEAD
 * key_index - gives the index of a key
 * @key: key to get index for
 * @size: size of the hash table
 *
 * Return: index for the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
=======
 *  * key_index - gives the index of a key
 *   * @key: key to get index for
 *    * @size: size of the hash table
 *     *
 *      * Return: index for the key
 *       */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
		return (hash_djb2(key) % size);
>>>>>>> ccccd2c29c455de35f9b03793aff7eb6462fa3bf
}
