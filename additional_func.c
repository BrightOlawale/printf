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


char *rev_string(char *s)
{
	int len;
	int head;
	char tmp;
	char *dest;

	for (len = 0; s[len] != '\0'; len++)
	{}

	dest = malloc(sizeof(char) * len + 1);
	if (dest == NULL)
		return (NULL);

	_memcpy(dest, s, len);
	for (head = 0; head < len; head++, len--)
	{
		tmp = dest[len - 1];
		dest[len - 1] = dest[head];
		dest[head] = tmp;
	}
	return (dest);
}

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}