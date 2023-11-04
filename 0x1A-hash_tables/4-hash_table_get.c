#include "hash_tables.h"

/**
<<<<<<< HEAD
 * hash_table_get - retrieves a value associated with a key
 * @ht: table to retrieve value from
 * @key: key to find value
 *
 * Return: value associated with key, or NULL if key cannot be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
=======
 *  * hash_table_get - retrieves a value associated with a key
 *   * @ht: table to retrieve value from
 *    * @key: key to find value
 *     *
 *      * Return: value associated with key, or NULL if key cannot be found
 *       */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
		unsigned long int index;
			hash_node_t *tmp;

				if (ht == NULL || ht->array == NULL || ht->size == 0 ||
							    key == NULL || strlen(key) == 0)
							return (NULL);
					index = key_index((const unsigned char *)key, ht->size);
						tmp = ht->array[index];
							while (tmp != NULL)
									{
												if (strcmp(tmp->key, key) == 0)
																return (tmp->value);
														tmp = tmp->next;
															}
								return (NULL);
>>>>>>> ccccd2c29c455de35f9b03793aff7eb6462fa3bf
}
