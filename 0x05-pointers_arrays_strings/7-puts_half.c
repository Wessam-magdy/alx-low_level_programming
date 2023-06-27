#include "main.h"

/**
 * puts_half -  This is the preferred style for multi-line
 * comments in C source code.
 * Please use it consistently.
 * Description:  A column of asterisks on the left side,
 * with beginning and ending almost-blank lines.
 * @str:  int param
 * Return: 1 if success and 0 if fail
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' ; i++)
		;
	i++;
	for (i /= 2 ; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
