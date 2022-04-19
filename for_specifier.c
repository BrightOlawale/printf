#include "main.h"

int print_char(va_list arr_list)
{
	_writechar(va_arg(arr_list, int));
	return (1);
}

int print_string(va_list arr_list)
{
	int i;
	char *s;

	s = va_arg(arr_list, char *);
	if (s == NULL)
		return (-1);
	for (i = 0; s[i] != '\0'; i++)
	{
		_writechar(s[i]);
	}
	return (i);
}

int print_percent(va_list arr_list)
{
	_writechar('%');
	return (1);
}
