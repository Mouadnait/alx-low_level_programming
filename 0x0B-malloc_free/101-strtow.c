#include "main.h"

int count_words(char *str);
int get_word_length(char *str);
char **allocate_memory(int words);

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: A pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, words_count;

	if (str == NULL || *str == '\0')
		return (NULL);

	words_count = count_words(str);
		if (words_count == 0)
			return (NULL);

	words = allocate_memory(words_count);
	if (words == NULL)
		return (NULL);

	for (i = 0, j = 0; i < words_count; ++i)
	{
	while (str[j] == ' ')
		++j;

	len = get_word_length(&str[j]);
	words[i] = malloc((len + 1) * sizeof(char));
	if (words[i] == NULL)
	{
		for (k = 0; k < i; ++k)
		free(words[k]);
		free(words);
		return (NULL);
	}

	for (k = 0; k < len; ++k, ++j)
		words[i][k] = str[j];
	words[i][k] = '\0';
	}
	words[i] = NULL;

	return (words);
}

/**
 * count_words - Count the number of words in a string
 * @str: The string to count the words in
 *
 * Return: The number of words in the string
 */
int count_words(char *str)
{
	int count = 0, i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			++count;
	}

	return (count);
}

/**
 * get_word_length - Get the length of a word
 * @str: The string to get the word length from
 * Return: The length of the word
 */
int get_word_length(char *str)
{
	int len = 0;

	while (str[len] != ' ' && str[len] != '\0')
		++len;

	return (len);
}

/**
 * allocate_memory - Allocate memory for the words array
 * @words: The number of words in the string
 * Return: A pointer to an array of strings
 */
char **allocate_memory(int words)
{
	char **word_array;

	word_array = malloc((words + 1) * sizeof(char *));
	if (word_array == NULL)
		return (NULL);

	return (word_array);
}
