/**
 * str_len - calculates the length of a string.
 * @str: pointer to the character array.
 * Return: length of the string
 */
int str_len(char *str)
{
	int i = 0;

	while (str[i])
	{
		i++;
	}
	return (i);
}

/**
 * _strncat - concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: number of bytes to print
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dest_len = str_len(dest);
	int src_len = str_len(src);

	for (i = 0; i < n; i++)
	{
		dest[dest_len + i] = src[i];
		if (i + 1 > src_len)
		{
			break;
		}
	}
	return (dest);
}
