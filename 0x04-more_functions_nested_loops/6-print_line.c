#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: int to be checked
 * Return: void
 */

void print_line(int n)
{
	int i = 0;

		for (; i < n; i++)
			_putchar('_');
	_putchar('\n');
}
