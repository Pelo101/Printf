int _putchar(char c);
int _printf(const char *format, ...);

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>   //to check for null

#define void(x)
#define BUFF_SIZE 1024


/* FLAGS */
#define F

/* SIZES */
#define S



/*
* @fmt: The format.
* @fn: The function associated.
*/

{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};

/* function to handle other specifiers */
int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);





#endif

