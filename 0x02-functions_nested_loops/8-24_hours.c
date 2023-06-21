#include "main.h"
/**
 * jack_bauer - writes the character C to stdout
 * @c the character to print
 * Description: A C  program that  generate random number
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int i = 00;
	int j = 00;

	for (i = 0 ; i < 24 ; i++)
	{
		for (j = 0 ; j <= 59 ; j++)
		{
			_putchar(i / 10 + 48);
			_putchar(i % 10 + 48);
			_putchar(':');
			_putchar(j / 10 + 48);
			_putchar(j % 10 + 48);
			_putchar('\n');
		}
	}

}
