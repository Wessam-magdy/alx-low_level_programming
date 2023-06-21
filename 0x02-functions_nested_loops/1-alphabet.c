#include "main.h"

/**
 * print_alphabet - writes the character C to stdout
 * @c the character to print
 * Description: A C  program that  generate random number
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		_putchar(c);
	}
	putchar('\n');
}

