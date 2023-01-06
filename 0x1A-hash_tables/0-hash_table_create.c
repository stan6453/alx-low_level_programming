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


	my_table = malloc(sizeof(hash_table_t));

	if (my_table == NULL)
		return (NULL);
	my_table->size = size;
	return (my_table);
}
