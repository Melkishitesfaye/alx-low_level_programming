#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: character to be checked
 * Return: 1  greater than zero, -1 for negative value and 0 for zero value.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

