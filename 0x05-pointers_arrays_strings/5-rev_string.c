#include "main.h"

/**
 * rev_string -  This is the preferred style for multi-line
 * comments in C source code.
 * Please use it consistently.
 * Description:  A column of asterisks on the left side,
 * with beginning and ending almost-blank lines.
 * @s:  int param
 * Return: 1 if success and 0 if fail
 */
void rev_string(char *s)
{
	int l, i;
	char temp;

	for (l = 0 ; s[l] != '\0' ; ++l)
		;

	for (i = 0 ; i < l / 2 ; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = temp;
	}
}
