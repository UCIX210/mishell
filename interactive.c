#include "shell.h"
/**
 * interactive - print interactive
 * @commd: string array
 */
void interactive(char **commd)
{
	char *argv[4];
	char *binares;
	char *parametro = (*(commd + 1));
	int check = 0;

	binares = getbinarie(*commd);
	binares = concat(binares, "/");
	binares = concat(binares, *commd);
	argv[0] = binares;
	argv[1] = parametro;
	argv[2] = ".";
	argv[3] = NULL;
	check = execve(argv[0], argv, NULL);
	if (check == -1)
	{
		perror("Error");
	}
}
