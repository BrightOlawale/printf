#include "main.h"
#include <stdio.h>
int hex_check(int, char);
/**
 * print_binary - Converts a number from base 10 to binary
 * @arr_list: List of arguments passed to this function
 * Return: The length of the number printed
 */
int print_binary(va_list arr_list)
{
	unsigned int num;
	int i, len;
	char *str;
	char *rev_str;

	num = va_arg(arr_list, unsigned int);
	if (num == 0)
		return (_writchar('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 2);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (-1);

	for (i = 0; num > 0; i++)
	{
		if (num % 2 == 0)
			str[i] = '0';
		else
			str[i] = '1';
		num = num / 2;
	}
	str[i] = '\0';
	rev_str = rev_string(str);
	if (rev_str == NULL)
		return (-1);
	write_base(rev_str);
	free(str);
	free(rev_str);
	return (len);
}

/**
 * print_hex - Prints a representation of a decimal number on base16 lowercase
 * @arr_list: List of the arguments passed to the function
 * Return: Number of characters printed
 */
int print_hex(va_list arr_list)
{
	unsigned int num;
	int len;
	int rem_num;
	char *hex_rep;
	char *rev_hex;

	num = va_arg(arr_list, unsigned int);

	if (num == 0)
		return (_writechar('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 16);
	hex_rep = malloc(sizeof(char) * len + 1);
	if (hex_rep == NULL)
		return (-1);
	for (len = 0; num > 0; len++)
	{
		rem_num = num % 16;
		if (rem_num > 9)
		{
			rem_num = hex_check(rem_num, 'x');
			hex_rep[len] = rem_num;
		}
		else
			hex_rep[len] = rem_num + 48;
		num = num / 16;
	}
	hex_rep[len] = '\0';
	rev_hex = rev_string(hex_rep);
	if (rev_hex == NULL)
		return (-1);
	write_base(rev_hex);
	free(hex_rep);
	free(rev_hex);
	return (len);
}
