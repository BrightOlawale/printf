#include "main.h"
/**
 * print_char - prints characters
 * @arr_list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_char(va_list arr_list)
{
	_writechar(va_arg(arr_list, int));
	return (1);
}

/**
 * print_string - prints strings
 * @arr_list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_string(va_list arr_list)
{
	int i;
	char *s;

	s = va_arg(arr_list, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		_writechar(s[i]);
	}
	return (i);
}

/**
 * print_integer - Prints an integer
 * @arr_list: list of arguments
 * Return: Will return the amount of characters printed
 */
int print_integer(va_list arg_list)
{
	int num_length;
	num_length = print_number(arg_list);
	return (num_length);
}

/**
 * unsigned_integer - Prints Unsigned integers
 * @list: List of all of the argumets
 * Return: a count of the numbers
 */
int unsigned_integer(va_list arg_list)
{
	unsigned int num;

	num = va_arg(arg_list, unsigned int);

	if (num == 0)
		return (print_unsgined_number(num));

	if (num < 1)
		return (-1);
	return (print_unsgined_number(num));
}
