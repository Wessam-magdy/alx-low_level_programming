#include "main.h"

/**
 * print_triangle -  This is the preferred style for multi-line
 * comments in C source code.
 * Please use it consistently.
 * @size: param
 * Description:  A column of asterisks on the left side,
 * with beginning and ending almost-blank lines.
 *
 */
void print_triangle(int size)
{
	int h, b;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (h = 1 ; h <= size ; h++)
		{
			for (b = 1; b <= size ; b++)
			{
				if ((b + h) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
