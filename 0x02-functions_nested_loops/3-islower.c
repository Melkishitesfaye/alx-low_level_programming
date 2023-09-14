#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c: checked character
 * Return: 0 for lowercase character or 1 for anything else (Success)
 */

int _islower(int c)
{
	if (c >= 95 && c <= 122)
		return (1);
	else
		return (0);
}
