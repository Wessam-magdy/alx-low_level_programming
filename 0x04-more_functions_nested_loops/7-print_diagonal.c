#include "main.h"

/**
 * print_diagonal -  This is the preferred style for multi-line
 * comments in C source code.
 * Please use it consistently.
 *@n: param
 * Description:  A column of asterisks on the left side,
 * with beginning and ending almost-blank lines.
 *
 */

void print_diagonal(int n)
{
	int postn, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (postn = 0 ; postn < n ; postn++)
		{
			for (space = 0 ; space < postn ; space++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
