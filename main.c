#include "main.h"

/**
 * main - entry point
 * Return: int
 */

int main(void)
{
	char *buffer = NULL, **arguments;
	size_t read_s = 0;
	ssize_t buff_s = 0;
	int exit = 0;

	while (1)
	{
		if (isatty(0))
			write(1, "$ ", 2);

		buff_s = getline(&buffer, &read_s, stdin);
		if (buff_s == -1 || str_compare("exit\n", buffer) == 0)
		{
			free(buffer);
			break;
		}
		buffer[buff_s - 1] = '\0';

		if (str_compare("env", buffer) == 0)
		{
			print_env();
			continue;
		}

		if (_emptyLine(buffer) == 1)
		{
			exit = 0;
			continue;
		}

		arguments = _tokens(buffer, " ");
		arguments[0] = path_searching(arguments[0]);

		if (arguments[0] != NULL)
			exit = _exe(arguments);
		else
			perror("Error");
		free(arguments);
	}
	return (exit);
}
