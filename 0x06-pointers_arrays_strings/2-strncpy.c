#include "main.h"

/**
 * _strncpy -  This is the preferred style for multi-line
 * comments in C source code.
 * Please use it consistently.
 * Description:  A column of asterisks on the left side,
 * with beginning and ending almost-blank lines.
 * @n:  int param
 * @dest: param
 * @src: param
 * Return: 1 if success and 0 if fail
 */
char *_strncpy(char *dest, char *src, int n)
{
	int  i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);

}
