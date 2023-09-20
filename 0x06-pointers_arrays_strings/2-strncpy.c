#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: string to be copied to
 * @src: string to be copied
 * @n: numebr of bytes to be copied
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

		for (; i < n && src[i] != '\0'; i++)
			dest[i] = src[i];
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	return (dest);
}
