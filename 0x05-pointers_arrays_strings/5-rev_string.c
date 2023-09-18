#include "main.h"
/**
 * rev_string - reverse a string.
 * @s: pointer of string to reverse.
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0, j = 0;
	char temp;

		while (s[i] != '\0')
			i++;
		for (j = i - 1 ; j >= i / 2; j--)
		{
			temp = s[j];
			s[j] = s[i - j - 1];
			s[i - j - 1] = temp;
		}
}
