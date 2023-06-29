#include "main.h"

/**
 * _strcmp -  This is the preferred style for multi-line
 * comments in C source code.
 * Please use it consistently.
 * Description:  A column of asterisks on the left side,
 * with beginning and ending almost-blank lines.
 * @s1:  int param
 * @s2: param
 * Return: 1 if success and 0 if fail
 */
int _strcmp(char *s1, char *s2)
{
	int equal = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			equal = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++
	}
	return (equal);

}
