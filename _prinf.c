#include "main.h"
/**
 * _printf - takes the main string and all neccessary parameter
 * print a formated string
 * @format: A string containing all the desired characters
 * Return: A total count of the characters printed
 */
int _printf(const char *format, ...)
{
	int counter;

	symbfunc options[] = {
	{"c", print_char},
	{"s", print_string},
	{"d", print_integer},
	{"i", print_integer},
	{"b", print_binary},
	{"u", unsigned_integer},
	{"o", print_octal},
	{"x", print_hex},
	{"X", print_HeX},
	{"S", print_np_string},
	{NULL, NULL}
	};

	va_list arg_param;

	if (format == NULL)
		return (-1);

	va_start(arg_param, format);
	counter = compute(format, options, arg_param);
	va_end(arg_param);
	return (counter);
}
