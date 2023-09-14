#include "main.h"

/**
 * main -  prints the alphabet, in lowercase.
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

