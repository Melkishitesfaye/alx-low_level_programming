#include "main.h"
#include <ctype.h>

/**
 * leet - encodes a string into 1337.
 * @str: string to be encoded.
 * Return: char
 */

char *leet(char *str)
{
	int i = 0, j = 0;
	char e[5] = "aeiou";
	char v[5] = "43071"; 

	while (str[i])
	{
		for (; j < 5; j++)
		{
			if (tolower(str[i]) == e[j])
				str[i] = v[j];
		}
		i++;
	}
	return (str);
}
