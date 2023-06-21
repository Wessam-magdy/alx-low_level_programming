#include "main.h"

/*
 * print_to_98 check if a charachter is lower cas
 *
 * Description: print_to_98 function
 *
 * @c: return
 */

int print_to_98(int c)
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
