#include "hash_tables.h"


/**
 * hash_table_get -  retrieves a value associated with a key.
 * @ht: the hash table to look into
 * @key: the key you are looking for
 * Return: the value associated with the element, or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *temp;

	if (key == NULL || key[0] == '\0' || ht == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];

	while(temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			return (temp->value);
		}
		temp = temp->next;
	}
	return NULL;
}
