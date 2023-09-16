#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14.
 * Return: void
 */

void more_numbers(void)
{
	int i = 0, j, k;

		for (; i < 10; i++)
		{
			for (j = 0; j < 15; j++)
			{
				if (j >= 10)
				{
					k = j % 10;
					_putchar('1');
				}
				else
					k = j;
				_putchar(k + '0');
			}
			_putchar('\n');
		}
}
