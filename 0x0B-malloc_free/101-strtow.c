#include <stdlib.h>

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

	for (i = 0; str[i] != '\0' && str[i] != ' '; i++)
		;
	return (i);
}

/**
 * _word_count- counts the number of words in a atring
 * @str: string to find word count
 * Description: counts the number of words in a atring
 * Return: number of words
 */
int _word_count(char *str)
{
	int i, word_count = 0, instr = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (instr && str[i] != ' ') /*inside a word*/
		{

		}
		else if (instr && str[i] == ' ')/*coming out of a word*/
		{
			instr = 0;
		}
		else if (!instr && str[i] != ' ')/*going into a word*/
		{
			instr = 1;
			word_count++;
		}
	}
	return (word_count);
}

/**
 * strtow - multiplies two digits
 * @str: 1st digit in the multiplication
 * Description: multiplies two digits
 * Return: the result of the multiplication
 */
char **strtow(char *str)
{
	char **str_arr;
	int i, j, str_len, word_count;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = _word_count(str);
	str_arr = (char **)malloc(sizeof(char *) * word_count);
	if (str_arr == NULL)
		return (NULL);

	for (i = 0; i < word_count; i++)
	{
		while (*str == ' ') /*always skip empty space*/
			str++;

		str_len = _str_len(str);
		str_arr[i] = (char *)malloc(sizeof(char) * str_len + 1);

		for (j = 0; j < str_len; j++)
		{
			str_arr[i][j] = *str;
			str++;
		}
		str_arr[i][str_len] = '\0';
	}

	return (str_arr);
}
