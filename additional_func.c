#include "main.h"
#include <stdio.h>

/**
 * _writebase - send character to be written on standard output
 * @str - ctring to be written
 */

void _writebase(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_writechar(str[i]);
}

/**
 *base_len - calculate length of an octal number
 *@num: The number whose length will be calculated
 *@base: Base to calculate
 *Return: An integer for the length of a number
*/

unsigned int base_len(unsigned int num, int base)
{
	unsigned int i;

	for (i = 0; num > 0; i++)
	{
		num = num / base;
	}
	return (i);
}

