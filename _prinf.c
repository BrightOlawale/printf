#include "main.h"

int _printf(const char *format, ...)
{
	int counter;

	symbfunc options[] = {
	{"c", print_char},
	{"s", print_string},
	{"%", print_percent},
	{NULL, NULL}
	};

	va_list arg_param;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(arg_param, format);
	va_start(arg_param, format);
	counter = compute(format, options, arg_param);
	va_end(arg_param);
	return (counter);
}
