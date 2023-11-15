#include "main.h"

/**
 * *path_searching - function that search for path
 * @command: cmd
 * Return:  path
 */

char *path_searching(char *command)
{

	char *path = get_env("PATH"), *copied_path;
	char **path_token;
	char *path_append = NULL;
	int c = 0, length_pathh = 0;
	struct stat info;

	if (stat(command, &info) == 0)
		return (command);

	copied_path = malloc(str_length(path) + 1);

	copied_path = str_copy(copied_path, path);
	path_token = _tokens(copied_path, ":");

	while (path_token[c])
	{
		length_pathh = str_length(path_token[c]);

		if (path_token[c][length_pathh - 1] != '/')
			path_append = str_concat(path_token[c], "/");

		path_append = str_concat(path_token[c], command);

		if (stat(path_append, &info) == 0)
			break;

		c++;
	}

	free(copied_path);

	if (!path_token[c])
	{
		free(path_token);
		return (NULL);
	}

	free(path_token);
	return (path_append);
}
