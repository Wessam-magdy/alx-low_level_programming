#include "main.h"

/**
 * _strcat -  This is the preferred style for multi-line
 * comments in C source code.
 * Please use it consistently.
 * Description:  A column of asterisks on the left side,
 * with beginning and ending almost-blank lines.
 * @src:  int param
 * @dest: param
 * Return: 1 if success and 0 if fail
 */
char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;

	while (dest[c])
		c++;

	for (c2 = 0 ; src[c2] ; c2++)
		dest[c++] = src[c2];
	return (dest);
}
