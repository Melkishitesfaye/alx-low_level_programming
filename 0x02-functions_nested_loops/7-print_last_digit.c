#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @i: digit to be printed
 * Return: int
 */

int print_last_digit(int i)
{
	int ld = i % 10;

	if (ld < 0)
		ld *= -1;
	_putchar(ld + '0');
	return (ld);
}
