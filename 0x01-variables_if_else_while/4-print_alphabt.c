#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line.
 * Return: 0(Success)
 */

int main(void)
{
	char alp = 'a';

		for ( ; alp <= 'z'; alp++)
		{
			if (alp == 'q' || alp ==  'e')
				continue;
			putchar(alp);
		}
		putchar('\n');
	return (0);
}
