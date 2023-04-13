#include "main.h"
/**
 * string_nconcat - concatenate two strings up to n bytes.
 * @s1: source string
 * @s2: string to truncate up to n bytes
 * @n: number of bytes to truncate by
 * Return: pointer to new buffer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_str;
	unsigned int s1_len, s2_len, sizeBuffer, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1_len = 0; s1[s1_len]; s1_len++)
		;
	for (s2_len = 0; s2[s2_len]; s2_len++)
		;

	s2_len > n ? (s2_len = n) : (n = s2_len);
	sizeBuffer = s1_len + s2_len + 1;

	concat_str = malloc(sizeof(char) * sizeBuffer);
	if (!concat_str)
		return (NULL);

	for (i = 0; i < (s1_len + s2_len); i++)
	{
		if (i < s1_len)
			concat_str[i] = s1[i];
		else
			concat_str[i] = s2[i - s1_len];
	}

	concat_str[i] = '\0';

	return (concat_str);
}
