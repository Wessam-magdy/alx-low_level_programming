#include "main.h"

/**
 * print_alphabet_x10 - writes the character C to stdout
 * @c the character to print
 * @i the iteration
 * Description: A C  program that  generate random number
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		for (c = 'a' ; c <= 'z' ; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
