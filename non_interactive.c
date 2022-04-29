#include "shell.h"
/**
 * non_interactive - print non-interactive
 * @commd: string array
 */
void non_interactive(char **commd)
{
	char *parametro = (*(commd + 1));
	char *argv[4];
	int n;

	argv[0] = commd[0];
	argv[1] = parametro;
	argv[2] = ".";
	argv[3] = NULL;
	n = execve(argv[0], argv, NULL);


	if (n == -1)
	{
		perror("Error");
	}
}
