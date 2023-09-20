#include "main.h"
#include <string.h>

/**
 * _strcmp - compares two strings.
 * @s1: string to be compared.
 * @s2: string to be compared.
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	long unsigned int i = 0;

		while (i < strlen(s1) && i < strlen(s2))
		{
			if (s1[i] != s2[i])
				return (s1[i] - s2[i]);
			i++;
		}
		if (strlen(s1) >= i)
			return ((int)s1[i]);
		else if (strlen(s2) >= i)
			return ((int)s2[i]);
		else
			return (0);
}
