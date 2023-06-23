#include "main.h"

/**
 * more_numbers -  This is the preferred style for multi-line
 * comments in C source code.
 * Please use it consistently.
 *
 * Description:  A column of asterisks on the left side,
 * with beginning and ending almost-blank lines.
 *
 */

void more_numbers(void)
{
	int num = 0;
	int num2 = 0;

	for (num = 0 ; num <= 9; num++)
	{
		for (num2 = 0 ; num2 <= 14 ; num2++)
		{
			_putchar(num2 + 48);
		}
		_putchar('\n');
	}
}
