#include <stdio.h>
#include "main.h"

/**
 * main - Entry Point
 *
 * Description: A C  program that print string
 *
 * Return: 0
 */

int main(void)
{
	char str[] = "_putchar";
	int i;
		for (i = 0; i < 8 ; i++)
		{
			_putchar(str[i]);
		}
	_putchar('\n');
	return (0);
}
