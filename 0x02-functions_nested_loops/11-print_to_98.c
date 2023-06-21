#include "main.h"

/**
	 * print_to_98 -  This is the preferred style for multi-line
	 * comments in C source code.
	 * Please use it consistently.
	 *
	 * Description:  A column of asterisks on the left side,
	 * with beginning and ending almost-blank lines.
	 * @c: inital par
	 */

void print_to_98(int c)
{
	int count;

	if (c > 98)
	{
		for (count = c ; count > 98 ; count--)
		{
			printf("%d, ", count);
		}
	}
	else
	{
		for (count = c ; count < 98 ; count++)
		{
			printf("%d, ", count);
		}
	}

	printf("98\n");
}
