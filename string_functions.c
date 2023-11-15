#include "main.h"
/**
 * str_compare- function to compare two strings
 * @str1: string
 * @str2: string
 * Return: 0 if equale
*/
int str_compare(char *str1, char *str2)
{
	for ( ; *str1 && *str2; str1++, str2++)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
	}
	return (0);
}

/**
 * *str_copy- function that copy string
 * @destination: compared string
 * @source: orgin string
 * Return: copied string
*/
char *str_copy(char *destination, char *source)
{
	int i = 0;

	while (source[i] != '\0')
	{
		destination[i] = source[i];
		i++;
	}
	destination[i++] = '\0';
	return (destination);
}
/**
 * *str_concat-: function that concatinate two strings
 * @destination:string to be added
 * @source: origin string
 * Return: concatinate the two strings
*/
char *str_concat(char *destination, char *source)
{
	int length = str_length(destination), count = 0;

	while (source[count])
	{
		destination[length++] = source[count];
		count++;
	}
	return (destination);
}
/**
 * str_length- function that get the length of string
 * @s: the string
 * Return: length of string
 */
int str_length(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
