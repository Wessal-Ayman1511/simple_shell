#include "main.h"

/**
 * _exe - functions that execute
 * @arguments: arguments
 * Return:  status
 */

int _exe(char **arguments)
{

	int pid = fork();
	int stat;

	if (pid == 0)
	{
		if (execve(arguments[0], arguments, environ) == -1)
			perror("Error");
	}
	else
	{
		wait(&stat);
		if (WIFEXITED(stat))
			stat = WEXITSTATUS(stat);
	}

	return (stat);
}
