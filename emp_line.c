#include "main.h"

/**
 * _emptyLine- function that check if emp or not
 * @buffer: the line
 * Return: 0 or 1
 */

int _emptyLine(char *buffer)
{
	int count = 0;

	while (buffer[count] != '\0')
	{
		if (buffer[count] != ' ')
			return (0);
		count++;
	}
	return (1);
}
