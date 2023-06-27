#include <unistd.h>
#include "main.h"
/**
  * _strlen -  This is the preferred style for multi-line
  * comments in C source code.
  * Please use it consistently.
  *
  * Description:  A column of asterisks on the left side,
  * with beginning and ending almost-blank lines.
  * @s: inital par
  * Return: 1 if success and 0 if fail
  */
int _strlen(char *s)
{
	int counter;

	for (counter = 0 ; *s != '\0' ; s++)
	{
		counter++;
	}
	return (counter);
}
