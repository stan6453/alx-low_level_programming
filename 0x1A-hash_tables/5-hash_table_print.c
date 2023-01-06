#include "hash_tables.h"


/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table
 * Return: 0 if program exited without error
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i;
	int first_item = 1;

	if (ht == NULL)
	{
		printf("{}\n");
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			if (!first_item)
				printf(", ");
			printf("'%s':", ht->array[i]->key);
			printf(" '%s'", ht->array[i]->value);
			temp = temp->next;
			first_item = 0;
		}
	}

	printf("}\n");

}
