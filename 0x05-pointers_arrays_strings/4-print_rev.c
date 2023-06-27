#include "main.h"

/**
 * print_rev -  This is the preferred style for multi-line
 * comments in C source code.
 * Please use it consistently.
 * Description:  A column of asterisks on the left side,
 * with beginning and ending almost-blank lines.
 * @s:  int param
 * Return: 1 if success and 0 if fail
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
