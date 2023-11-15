#include "main.h"
/**
 * **_tokens - split string
 * @s: string to tokenize it
 * @del: delimenator
 * Return: spilted command
 */

char **_tokens(char *s, char *del)
{
	char *token, **ptr;
	int count = 0;

	token = strtok(s, del);
	ptr = (char **)memory_alloc(100, sizeof(char *));

	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}

	for (count = 0; token ; count++)
	{
		ptr[count] = token;
		token = strtok(NULL, del);
	}
	return (ptr);
}
