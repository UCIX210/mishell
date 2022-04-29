#include "shell.h"
/**
 * exitandenv - print env or exit shell
 * @command: first command
 * @env: environment
 * Return: 0
 */
int exitandenv(char *command, char **env)
{

	if ((strcmp(command, "exit")) == 0)
	{
		printf("ADIOS :)\n");
		exit(0);
	}
	if ((strcmp(command, "env")) == 0)
	{
		size_t i = 0;
		size_t stringlent  = 0;

		for (i = 0; env[i]; i++)
		{
			stringlent = strlen(env[i]);
			write(STDOUT_FILENO, env[i], stringlent);
			write(STDOUT_FILENO, "\n", 1);
		}
		return (0);
	}
	return (-1);
}
