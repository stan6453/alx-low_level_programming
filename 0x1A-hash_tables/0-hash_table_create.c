#include "hash_tables.h"


/**
 * hash_table_create - creates a hash table
 * @size:  the size of the array
 * Return:  pointer to the newly created hash table.
 *          or NULL on error
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *my_table;
	unsigned long int i;

	my_table = malloc(sizeof(hash_table_t));

	if (my_table == NULL)
		return (NULL);
	my_table->size = size;
	my_table->array = malloc(size * sizeof(hash_node_t *));
	if (my_table->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		my_table->array[i] = NULL;
	return (my_table);
}
