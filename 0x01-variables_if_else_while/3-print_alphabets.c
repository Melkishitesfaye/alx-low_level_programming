#include <stdio.h>
#include <ctype.h>

/**
 * main -  prints alphabet in lowercase, and uppercase then new line.
 * Return:0(Success)
 */

int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

		for (i = 0; i < 26; i++)
		{
			putchar(alp[i]);
		}
		for (i = 0; i < 26; i++)
		{
			putchar(toupper(alp[i]));
		}
		putchar('\n');
	return (0);
}
