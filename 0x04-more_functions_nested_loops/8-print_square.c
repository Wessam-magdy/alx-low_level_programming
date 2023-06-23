#include "main.h"

/**
 * print_square -  This is the preferred style for multi-line
 * comments in C source code.
 * Please use it consistently.
 * @size: param
 * Description:  A column of asterisks on the left side,
 * with beginning and ending almost-blank lines.
 *
 */

void print_square(int size)
{
	int c, r;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 0 ; r < size ; r++)
		{
			for (c = 0; c < size; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

}
