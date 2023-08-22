#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
 *
 *
 *
 */

int _printf(const char *format, ...)
{
    va_list ptr;
    int count = 0;
    int c;
    char *s;

    va_start(ptr, format);



    while (*format != '\0')
    {
        if (*format == '%' &&  *(format + 1) != '\0')     /* Parsing the string and checking if you can find %modulus specifier 								  								whether there is another charcater follwoing the modulus specifier */
        {
            format++;  /* move to next character */

            if (*format == 'c')         /* check if format is equal to character */
            {
                c = va_arg(ptr, int);
                _putchar(c);
                count++;              /* keep track of characters that have been printed */
            }
            else if (*format == 's')     /* check for string */
            {
                s = va_arg(ptr, char *);
                if (s != NULL)
                {
                    while (*s != '\0')
                    {
                        _putchar(*s);
                        s++;
                        count++;
                    }
                }
            }
            else if (*format == '%') /* check for modulus  */
            {
                _putchar('%');
                count++;
            }
        }
        else
        {
            _putchar(*format); /* print format */
            count++;
        }
        format++;
    }

    va_end(ptr);

    return count;  /* return number of characters that have been printed */
}


