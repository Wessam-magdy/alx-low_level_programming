#include "main.h"

/**
 *  print_numbers -  This is the preferred style for multi-line
 * comments in C source code.
 * Please use it consistently.
 *
 * Description:  A column of asterisks on the left side,
 * with beginning and ending almost-blank lines.
 *
 */

void print_numbers(void)
{
	int num = 0;

	for (num = 0 ; num <= 9; num++)
	{
		_putchar(num + 48);
	}
	_putchar('\n');
}
