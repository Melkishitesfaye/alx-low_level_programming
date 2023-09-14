#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character.
 * @c: character to be checked
 * Return: 1 for letter and 0 for others
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
