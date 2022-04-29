#include "shell.h"
/**
 * _strcmpdir - compare string
 * @s1: string1
 * @s2: string2
 * Return: 0 if they are the same
 */
int _strcmpdir(char *s1, char *s2)
{
	int i = 0;

	for (; (*s2 != '\0' && *s1 != '\0') && *s1 == *s2; s1++)
	{
		if (i == 3)
			break;
		i++;
		s2++;
	}

	return (*s1 - *s2);
}
