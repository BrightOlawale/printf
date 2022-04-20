#include "main.h"
/**
 * compute - takes the main string and all the necessary parameters to
 * print a formated string
 * @format: A string containing all the desired characters.
 * @options: A list of all the posible functions.
 * @arg_param: A list containing all the argumentents passed to the program.
 * Return: A total count of the characters printed.
 */
int compute(const char *format, symbfunc options[], va_list arg_param)
{
	int counter, char_no, i, j;

	counter = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; options[j].symb != NULL; j++)
			{
				if (format[i + 1] == options[j].symb[0])
				{
					char_no = options[j].f(arg_param);
					if (char_no == -1)
						return (-1);
					counter += char_no;
					break;
				}
			}
			if (options[j].symb == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_writechar(format[i]);
					counter = counter + 1;
				}
				else
					return (-1);
			}
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == '%')
			_writechar('%');
			counter++;
		else
		{
			_writechar(format[i]);
			counter++;
		}
	}
	return (counter);
}
