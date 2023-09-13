#include <stdio.h>

/**
 * main -  prints all the numbers of base 16 in lowercase.
 * Return:0 (Success)
 */

int main(void)
{
	int i = 0;

		for (; i < 10; i++)
		{
			putchar((i % 10) + '0');
		}
		for (; i < 16; i++)
		{
			putchar((char)((i % 10) + 97));
		}
		putchar('\n');
	return (0);
}
