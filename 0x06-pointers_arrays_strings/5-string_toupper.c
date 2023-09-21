#include "main.h"
#include <string.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: string to be changed to upper case
 * Return: char
 */

char *string_toupper(char *str)
{
	int i = 0, ln = strlen(str);

		for (; i < ln; i++)
		{
			if ((int)str[i] >= 97 && (int)str[i] <= 122)
				str[i] -= 32;
		}
	return (str);
}
