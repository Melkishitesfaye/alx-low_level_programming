#include "main.h"
#include <string.h>

/**
 * _strcat - concatinate two strings.
 * @src: string to be concatinated.
 * @dest: string to be concatinated to.
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int dl = strlen(dest), sl = strlen(src), i;

		for (i = 0; i < sl && src[i] != 0; i++)
			dest[dl + i] = src[i];
		dest[dl + i] = '\0';
	return (dest);
}
