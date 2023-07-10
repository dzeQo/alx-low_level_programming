#include <stdlib.h>
#include <string.h>

/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 *
 * Return: Pointer to an array of strings (words).
 *         The last element of the array is NULL.
 *         Returns NULL if str == NULL or str == "".
 *         Returns NULL if memory allocation fails.
 */
char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
		return NULL;

	int word_count = 0;
	int i = 0;
	int len = strlen(str);

	while (i < len)
	{
		while (i < len && str[i] == ' ')
			i++;

		if (i < len && str[i] != ' ')
		{
			word_count++;

			while (i < len && str[i] != ' ')
				i++;
		}
	}

	char **words = (char **)malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return NULL;

	int word_index = 0;

	i = 0;
	while (i < len)
	{
		while (i < len && str[i] == ' ')
			i++;

		if (i < len && str[i] != ' ')
		{
			int start = i;
			int word_len = 0;

			while (i < len && str[i] != ' ')
			{
				i++;
				word_len++;
			}

			char *word = (char *)malloc((word_len + 1) * sizeof(char));
			if (word == NULL)
			{
				for (int j = 0; j < word_index; j++)
					free(words[j]);
				free(words);
				return NULL;
			}

			strncpy(word, str + start, word_len);
			word[word_len] = '\0';

			words[word_index] = word;
			word_index++;
		}
	}

	words[word_index] = NULL;

	return words;
}

