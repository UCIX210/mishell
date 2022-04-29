#include "shell.h"
/**
 * getbinarie - print interactive
 * @commd: first command
 * Return: binary folder
 */
char *getbinarie(char *commd)
{
	DIR *direct;
	struct dirent *wd;
	char *cmd, comp, **str  = malloc(sizeof(char) * 1024);
	char **split = malloc(sizeof(char) * 1024);
	int i, o, check;

	while (*environ != NULL)
	{
		if (!(strncmp(*environ, "PATH", 4)))
		{
			*str = *environ;
			for (i = 0; i < 9; i++, split++, str++)
			{
				*split = strtok(*str, ":='PATH'");
				direct = opendir(*split);
				if (direct == NULL)
				{
					perror("Directory not readable");
				}
				while ((wd = readdir(direct)))
				{
					cmd = wd->d_name;
					comp = _strcmpdir(cmd, commd);
					if (comp == 0)
					{
						return (*split);
					}
					if (cmd == NULL)
					{
						perror("Error");
					}}}}
		environ++;
	}
	return ("Error: Not Found");
}

