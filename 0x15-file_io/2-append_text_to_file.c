#include "main.h"

int _str_len(char *str);

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file
 * @text_content:  a NULL terminated
 * string to add at the end of the file
 * Return: 1 on success, -1 on failure
 * (file can not be created, file
 * can not be written, write “fails”, etc…)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND);
	if (fd == -1)
		return (-1);
	n = _str_len(text_content);
	if (text_content == NULL)
	{

	}
	else if (write(fd, text_content, n) == -1)
		return (-1);
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
