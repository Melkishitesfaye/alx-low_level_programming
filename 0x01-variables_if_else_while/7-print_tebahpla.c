#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse.
 * Return:0 (Success)
 */

int main(void)
{
	char alp = 'z';

		for (; alp >= 'a'; alp--)
		{
			putchar(alp);
		}
		putchar('\n');
	return (0);
}
