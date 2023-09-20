#include "main.h"
#include <string.h>

/**
 * _strncat  - concatinatetwo strings
 * @dest: string to be concatinated to
 * @src: string to be concatinated
 * @n: number of char to be taken from src
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int dl = strlen(dest), i = 0;

		for (; i < n && src[i] != '\0'; i++)
			dest[dl + i] = src[i];
		dest[dl + i] = '\0';
	return (dest);
}
