#include "hash_tables.h"


/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table
 * Return: 0 if program exited without error
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;

	if (ht == NULL)
	{
		printf("{}\n");
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		printf("'%s':", ht->array[i]->key);
		printf(" '%s'", ht->array[i]->value);

		printf(", ");
	}

	printf("}\n");

}
