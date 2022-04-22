Printf

SYNOPSIS
An implementation of the printf function.
To use this function the #include "main.h" is needed.

DESCRIPTION
write output to stdout, the standard output stream
_printf is a formatting function that is used to print a string to stdout.
_printf also contains a format specifier that is replaced by the actual value during execution
.SH _PRINT PROTOTYPE
int _printf(const char *format, ...);
.SH RETURN VALUE
_print writes the number of characters printed (excluding the null byte used to end output to strings)
.SH EXAMPLES
To print the output of mltiplication of to intergers
_printf("the multiplication of %d and %d is %d", a * b, mul);

USAGE
%c: To be used to print characters
.RS 0
%s: To be used to print strings
.RS 0
%d: To print integers of max and min size of an int type
.RS 0
%i: To print integers of max and min size of an int type
.RS 0
%b: To print a number in binary
.SH AUTHORS
Olawale Bright and Agunwa chisom c
