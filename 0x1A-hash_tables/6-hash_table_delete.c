#include "hash_tables.h"




void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp;
	hash_node_t *temp2;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			temp2 = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp->next);
			free(temp);
			temp=temp2;
		}
	}
	free(ht->array);
	free(ht);
}
