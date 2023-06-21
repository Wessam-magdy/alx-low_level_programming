#include "main.h"

/**
 * _isalpha - check if a charachter is lower case
 *
 * @c: the character to check
 * Description: A C  program that check charachters
 * Return: 1 for success and . for fail
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
