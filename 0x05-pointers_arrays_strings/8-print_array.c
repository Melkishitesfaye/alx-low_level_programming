#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements oof an array.
 * @a: array to be printed
 * @n: size to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

		for (; i < n - 1; i++)
			printf("%d, ", a[i]);
		printf("%d\n", a[i]);
}
