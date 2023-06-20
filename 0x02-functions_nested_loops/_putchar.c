#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character C to stdout
 * @c: the character to print
 *
 * Description: function to print char
 *
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
