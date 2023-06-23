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
	int num, num2, count;

	for (num = 0 ; num <= 9; num++)
	{
		for (num2 = 0 ; num2 <= 14 ; num2++)
		{
			count = num2;
			if (num2 > 9)
			{
				_putchar(1 + 48);
				count = num2 % 10;
			}
			_putchar(count + 48);
		}
		_putchar('\n');
	}
}
