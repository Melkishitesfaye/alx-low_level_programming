#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @i: a number to be computed
 * Return: int
 */

int _abs(int i)
{
	if (i < 0)
		return (-1 * i);
	else
		return (i);
}
