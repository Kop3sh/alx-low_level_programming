#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* word_len - rests any number by reference to 98
* @str: memroy pointed by s
*
* Return: input word length
*/
int word_len(char *str)
{
	int len = 0, i = 0;

	for (i = 0; str[i] != ' '; i++)
		len++;

	return (len);
}

/**
* strtow - rests any number by reference to 98
* @str: memroy pointed by s
*
* Return: void
*/
char **strtow(char *str)
{
	char **words;
	char *longest;
	int i, j, word_idx = 0, words_count = 0, longest_word = 0, word_len = 0;

	if (str == NULL || !strcmp(str, ""))
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
			word_len++;
		if (word_len > longest_word)
		{
			word_len = 0;
			longest_word++;
		}
	}
	for (i = 1; str[i]; i++)
	{
		if (str[i - 1] != ' ' && str[i] != ' ')
			words_count++;
	}
	printf("%d", words_count);
	longest = (char *) malloc(sizeof(char) * longest_word);
	words = (char **) malloc(sizeof(longest) * words_count++);
	words = (char **) malloc(sizeof(char) * longest * words_count);
	if (!words)
	{
		free(longest);
		free(words);
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		for (j = 0; str[i] != ' '; j++)
			words[word_idx][j] = str[i];
		word_idx++;
	}

	words[words_count - 1] = NULL;
	return (words);
}
