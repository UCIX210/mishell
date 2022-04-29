#include "shell.h"
/**
 * prompt - print interactive or non-interactive
 * @command: string array
 */
void prompt(char **command)
{
	if ((access(command[0], F_OK) == 0))
	{
		non_interactive(command);
	}
	else
	{
		interactive(command);
	}
}
