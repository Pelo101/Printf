#ifndef MAIN_H_
#define MAIN_H_



#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>

#define BUFF_SIZE 1024


int _printf(const char *format, ...);
int _putchar(char c);
int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);




/* FLAGS */
#define F

/* SIZES */
#define S


typedef int (*PrintHandler)(va_list);

/* Define the FormatSpecifier struct */

typedef struct {
    char format;
    int (*printer)(va_list);

} FormatSpecifier;

void print_all_handlers();



#endif

