#include "main.h"

/**
 * print_most_numbers -  This is the preferred style for multi-line
 * comments in C source code.
 * Please use it consistently.
 *
 * Description:  A column of asterisks on the left side,
 * with beginning and ending almost-blank lines.
 *
 */

void print_most_numbers(void)
{
	int num = 0;

	for (num = 0 ; num <= 9; num++)
	{
		if (num == 2 || num == 4)
			num++;
		_putchar(num + 48);
	}
	_putchar('\n');
}
