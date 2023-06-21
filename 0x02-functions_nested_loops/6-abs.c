#include "main.h"

/**
 * _abs - get absolute value
 *
 * @c: the character to check
 * Description: A C  program that check charachters
 * Return: 1 for success and . for fail
 */

int _abs(int c)
{
	if (c < 0)
	{
		c = c * (-1);
	}
	return (c);
}
