#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table to add or update the key/value to
 * @key:  the key. key can not be an empty string
 * @value: the value associated with the key. value must
 * be duplicated. value can be an empty string
 * Return: 1 if it succeeded, 0 otherwise
 * Description: adds an element to the hash table.
 * In case of collision, add the new node at the beginning of the list
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index;
	hash_node_t *node;
	hash_node_t *temp;

	if (key == NULL || key[0] == '\0' || ht == NULL || value == NULL)
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (0);
	}
	node->next = NULL;
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = node;
		return (1);
	}
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, node->key) == 0)
		{
			strcpy(temp->value, node->value);
			free_node(node);
			return (1);
		}
		temp = temp->next;
	}
	temp = ht->array[index];
	node->next = temp;
	ht->array[index] = node;
	return (1);
}

/**
 * free_node - fress a lonely node (not attched to any linked list)
 * @node: node to be freed
 */
void free_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}
