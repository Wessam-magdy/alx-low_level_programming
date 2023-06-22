#include "main.h"

/**
	 * _isdigit -  This is the preferred style for multi-line
	 * comments in C source code.
	 * Please use it consistently.
	 *
	 * Description:  A column of asterisks on the left side,
	 * with beginning and ending almost-blank lines.
	 * @c: inital par
	 * Return: 1 if success and 0 if fail
	 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
