#include "main.h"

/**
 * print_alphabet -  prints the alphabet, in lowercase.
 * Return: void
 */

void print_alphabet(void)
{
	char alp = 'a';

		for (; alp <= 'z'; alp++)
		{
			_putchar(alp);
		}
		_putchar('\n');
}

