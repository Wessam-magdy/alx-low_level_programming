#include "main.h"

/**
 * print_sign - check if a charachter isgreater than 0
 *
 * @c: the character to check
 * Description: A C  program that check charachters
 * Return: 1 for success and . for fail
 */

int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
