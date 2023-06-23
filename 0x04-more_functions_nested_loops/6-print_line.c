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
	int count = 0;

	do {
		_putchar('-');
		count++;
	} while (count < n)
	_putchar('\n');

}
