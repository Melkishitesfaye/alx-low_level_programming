#include <stdio.h>
/**
 * main -  prints the size of various types on the computer it is compiled and run on.
 * Return: success ? 0 : 1
 */
int main(void)
{
	char ch;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %lu byte(s)\nSize of an int: %lu byte(s)\nSize of a long int: %lu byte(s)\nSize of a long long int: %lu byte(s)\nSize of a float: %lu byte(s)\n", (unsigned long)sizeof(ch), (unsigned long)sizeof(i), (unsigned long)sizeof(li), (unsigned long)sizeof(lli), (unsigned long)sizeof(f));
return (0);
}
