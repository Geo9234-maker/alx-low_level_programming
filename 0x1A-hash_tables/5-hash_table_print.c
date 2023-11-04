#include "hash_tables.h"

/**
<<<<<<< HEAD
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	char flag = 0; /* 0 while no data has been printed yet */

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			flag = 1;
			tmp = tmp->next;
		}
	}
	printf("}\n");
=======
 *  * hash_table_print - prints a hash table
 *   * @ht: hash table to print
 *    *
 *     * Return: void
 *      */
void hash_table_print(const hash_table_t *ht)
{
		unsigned long int i;
			hash_node_t *tmp;
				char flag = 0; /* 0 while no data has been printed yet */

					if (ht == NULL || ht->array == NULL)
								return;
						printf("{");
							for (i = 0; i < ht->size; i++)
									{
												tmp = ht->array[i];
														while (tmp != NULL)
																	{
																					if (flag == 1)
																										printf(", ");
																								printf("'%s': '%s'", tmp->key, tmp->value);
																											flag = 1;
																														tmp = tmp->next;
																																}
															}
								printf("}\n");
>>>>>>> ccccd2c29c455de35f9b03793aff7eb6462fa3bf
}
