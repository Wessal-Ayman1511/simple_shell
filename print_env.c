#include "main.h"
/**
 * print_env- function print enviroment variables
*/

void print_env(void)
{
	int c = 0;

	while (environ[c])
	{
		write(1, environ[c], str_length(environ[c]));
		write(1, "\n", 1);
		c++;
	}
}
