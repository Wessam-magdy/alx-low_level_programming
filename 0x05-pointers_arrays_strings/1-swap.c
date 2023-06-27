#include <unistd.h>
#include "main.h"
/**
 * swap_int -  This is the preferred style for multi-line
 * comments in C source code.
 * pllease use it consistently.
 *
 *  Description:  A column of asterisks on the left side,
 * with beginning and ending almost-blank lines.
 * @a: inital par
 * @b: param
 * Return: 1 if success and 0 if fail
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
