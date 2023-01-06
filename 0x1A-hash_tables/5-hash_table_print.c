#include "hash_tables.h"


/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table
 * Return: 0 if program exited without error
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int has_next = 0;
	int first_item = 1;

	if (ht == NULL)
	{
		printf("{}\n");
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			has_next = 1;
			if (has_next && !first_item)
				printf(", ");
			printf("'%s':", ht->array[i]->key);
			printf(" '%s'", ht->array[i]->value);
			first_item = 0;
			has_next = 0;
		}
	}

	printf("}\n");

}
