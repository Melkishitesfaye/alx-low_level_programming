#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 * Return: void
 */

void print_triangle(int size)
{
	int i = 1;
	int j;

	if (size == 0)
	{
		_putchar('\n');
		return;
	}
	for (; i <= size; i++)
	{
		for (j = (size - i); j > 0; j--)
			_putchar(' ');
		for (j = i; j > 0; j--)
			_putchar('#');
		_putchar('\n');
	}
}
