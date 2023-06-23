#include "main.h"

/**
 * print_line -  This is the preferred style for multi-line
 * comments in C source code.
 * Please use it consistently.
 * @n: param
 * Description:  A column of asterisks on the left side,
 * with beginning and ending almost-blank lines.
 *
 */

void print_line(int n)
{
	int count;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (count = 1 ; count <= n ; count++)
			_putchar('_');
		_putchar('\n');
	}

}
