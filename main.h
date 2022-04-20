#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct symfun - defines a structure for the specifier and functions
 *
 * @symb: The operator
 * @f: The function associated
 */
struct symfun
{
	char *symb;
	int (*f)(va_list);
};
typedef struct symfun symbfunc;

/*Main fuctions*/
int compute(const char *format, symbfunc options[], va_list arg_param);
int _printf(const char *format, ...);
int _writechar(char);
int print_char(va_list);
int print_string(va_list);

#endif
