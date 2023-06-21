#include "main.h"

/**
 * print_last_digit - print last digit
 *
 * @c: the character to check
 * Description: A C  program that check charachters
 * Return: 1 for success and . for fail
 */

int print_last_digit(int c)
{
	if (c > 0)
		c = c % 10;
	else if (c < 0)
		c = -1 * (c % 10);

	_putchar(c + '0');
	return (c);
}
