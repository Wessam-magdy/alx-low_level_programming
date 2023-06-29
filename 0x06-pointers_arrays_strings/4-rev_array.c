#include "main.h"

/**
 * reverse_array -  This is the preferred style for multi-line
 * comments in C source code.
 * Please use it consistently.
 * Description:  A column of asterisks on the left side,
 * with beginning and ending almost-blank lines.
 * @a:  int param
 * @n: param
 */
void reverse_array(int *a, int n)
{
	int i, j, t;

	for (i = 0; j < (n - 1) ; i < j ; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}

}
