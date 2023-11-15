#include "main.h"

/**
 * *get_env - function get env variables
 * @var: variable
 * Return: enviromental variable
 */

char *get_env(char *var)
{
	int c1 = 0, c2 = 0;
	int stat;

	while (environ[c1])
	{
		stat = 1;

		while (environ[c1][c2] != '=')
		{
			if (environ[c1][c2] != var[c2])
				stat = 0;
			c2++;
		}
		if (stat == 1)
			break;
		c1++;
	}


	return (&environ[c1][c2 + 1]);
}
