#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description:  A C Program
 *
 * Return: 0
 */

int main(void)
{
	char ch = 'z';

	while (ch <= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
