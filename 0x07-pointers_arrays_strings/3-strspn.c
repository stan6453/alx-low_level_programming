
/**
 * _strspn - multiplies two digits
 * @s: 1st digit in the multiplication
 * @accept: 2nd digit to be multiplied
 * Description: multiplies two digits
 * Return: the result of the multiplication
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, insub = 1;

	for (i = 0; s[i] != '\0' && insub; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				insub = 1;
				break;
			{
			else
				insub = 0;
		}
	}
	return (--i);
}
