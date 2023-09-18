#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: pointer of string to print.
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0, j;

		while (s[i] != '\0')
			i++;
		for (j = i; j >= 0; j--)
			_putchar(s[j]);
		_putchar('\n');
}
