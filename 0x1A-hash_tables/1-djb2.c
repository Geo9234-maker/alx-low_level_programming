#include "hash_tables.h"

/**
<<<<<<< HEAD
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
=======
 *  * hash_djb2 - implementation of the djb2 algorithm
 *   * @str: string used to generate hash value
 *    *
 *     * Return: hash value
 *      */
unsigned long int hash_djb2(const unsigned char *str)
{
		unsigned long int hash;
			int c;

				hash = 5381;
					while ((c = *str++))
							{
										hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
											}
						return (hash);
>>>>>>> ccccd2c29c455de35f9b03793aff7eb6462fa3bf
}
