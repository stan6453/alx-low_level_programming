#include "main.h"

int _str_len(char *str);

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content:  a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure 
 * (file can not be created, file can not be written, write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	int fd, n;

	if (filename == NULL || text_content == NULL)
		return (0);
	fd = open(filename, O_CREAT | O_WRONLY, 0600);
	if (fd == -1)
		return (0);
	n = _str_len(text_content);
	if (write(fd, text_content, n) == -1)
		 return (0);
	close(fd);
	return (1);
}



/**
 * _str_len - finds length of a string
 * @str: string to find its length
 * Description: finds length of a string (not including null character)
 * Return: length of string
 */
int _str_len(char *str)
{
	int i;

	if (str == NULL)
		return (0);

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
