#include "main.h"
#include <ctype.h>

/**
 * times_table- check if a charachter is lower case
 *
 * Description: A C  program that check charachters
 * Return: 1 for success and . for fail
 */

void times_table(void)
{
	int num, mult, prod;

	for (num = 0 ; num <= 9 ; num++)
	{
		_putchar(48);
		for (mult = 1 ; mult <= 9 ; mult++)
		{
			_putchar(',');
			_putchar(' ');
			prod = num * mult;
			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48);
			_putchar((prod % 10) + 48);
		}
		_putchar('\n');
	}
}
