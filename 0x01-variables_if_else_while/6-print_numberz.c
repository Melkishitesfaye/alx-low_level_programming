#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10.
 * Return:0 (Success)
 */

int main(void)
{
	int i = 0;

		for (; i < 10; i++)
		{
			putchar((i % 10) + '0');
		}
		putchar('\n');
	return (0);
}
