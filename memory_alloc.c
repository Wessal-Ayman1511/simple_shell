#include "main.h"

/**
 * *memory_alloc - function that allocates memory
 * @n: array of int
 * @size: array size
 * Return: null if failed
 */

void *memory_alloc(unsigned int n, unsigned int size)
{
	unsigned int i = 0;
	char *p = NULL;

	if (n == 0 || size == 0)
		return (NULL);

	p = malloc(n * size);

	if (p == NULL)
		return (NULL);

	while (i < (n * size))
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
