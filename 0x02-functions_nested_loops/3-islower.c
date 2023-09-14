#include <ctype.h>
#include "main.h"

/**
 * _islower - checks for lowercase character.
 * Return: 0 || 1(Success)
 */

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
