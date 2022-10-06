



/**
 * _realloc - multiplies two digits
 * @ptr: 1st digit in the multiplication
 * @old_size: 1st digit in the multiplication
  @new_size: 1st digit in the multiplication
 * Description: multiplies two digits
 * Return: the result of the multiplication
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *new_ptr;

	if (ptr == NULL)
		ptr = malloc(new_size);
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (ptr == NULL)
		return (NULL);

	/*copy from old_size to new_size*/
	for (int i = 0; i < new_size && i < old_size; i++)
	{
		new_ptr[i] = ptr[i]
	}
	free(ptr);
	return (new_ptr);
}
