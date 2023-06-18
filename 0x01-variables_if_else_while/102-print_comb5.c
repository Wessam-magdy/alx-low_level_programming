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
	int f = 0, s;

	while (f <= 99)
	{
		s = f;
		while (s <= 99)
		{
			if (s != f)
			{
				putchar((f / 10) + 48);
				putchar((f % 10) + 48);
				putchar (' ');
				putchar((s / 10) + 48);
				putchar((s % 10) + 48);
				if (f != 98 || s != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			s++;
		}
		f++;
	}
	putchar('\n');
	return (0);
}
