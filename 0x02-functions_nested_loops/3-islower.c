#include "main.h"

/**
 * _islower - check if a charachter is lower case
 *
 * @c: the character to check
 * Description: A C  program that check charachters
 * Return: 1 for success and . for fail
 */

int _islower(int c)
{
	if (islower(c) == 1)
		return (1);
	else
		return (0);
}
