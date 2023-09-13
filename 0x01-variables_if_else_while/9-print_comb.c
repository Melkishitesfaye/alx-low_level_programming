#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 * Return:0 (Success)
 */

int main(void)
{
	int i = 0;

		for (; i < 10; i++)
		{
			putchar((i % 10) + '0');
			if (i == 9)
				break;
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
	return (0);
}
