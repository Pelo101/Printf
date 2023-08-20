#ifndef MAIN_H_
#define MAIN_H_



#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>

#define BUFF_SIZE 1024

int _putchar(char c);
int _printf(const char *format, ...);
int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list
int handle_print(const char *fmt, int *i,
va_list list, char buffer[], int flags, int width, int precision, int size) 

/* FLAGS */
#define F

/* SIZES */
#define S

/**
 * struct fmt - Struct op
 *
 * @fmt: The format.
 * @fn: The function associated.
 */
struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};



#endif /* MAIN_H_ */

