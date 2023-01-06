#include "main.h"

/**
* _strstr - rests any number by reference to 98
* @haystack: memroy pointed by s
* @needle: const byte
*
* Return: char *
*/
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j;
	char *start;

	while (haystack[i])
	{
		j = 0;
		while (needle[j])
		{
			if (haystack[i] == needle[j] && j == 0)
				start = haystack + i;
			else if (haystack[i] != needle[j])
				break;
			j++, i++;
		}
		if (needle[j] == '\0' && needle[j - 1] == haystack[i - 1])
			return (start);
		i++;
	}

	return ('\0');
}
