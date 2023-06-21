#include "main.h"
#include <ctype.h>

/**
 * _islower - check if a charachter is lower case
 *
 * @c: the character to check
 * Description: A C  program that check charachters
 * Return: 1 for success and . for fail
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
