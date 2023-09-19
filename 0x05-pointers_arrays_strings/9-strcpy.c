#include "main.h"
#include <string.h>
/**
 * _strcpy - copies the string pointed to by src.
 * @dest:  string to be copied to.
 * @src: string to be copied.
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
