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
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}