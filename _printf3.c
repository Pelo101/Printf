#include "main.h"
#include <stddef.h>
#include <stdarg.h>
#include "print_handlers.h"
/**
 *_printf - prints formatted string.
 *@format- string.
 *
 *
 */
int _printf(const char *format, ...)
{
        int count = 0;
        size_t n = 0;
        va_list ptr;

                FormatSpecifier specifiers[] = {
                {'s', print_string}, {'c', print_char},
                {'d', print_integer}, {'i', print_integer},
                {'b', print_binary}, {'u', print_unsigned},
                {'o', print_octal}, {'x', print_hexadecimal_low},
                {'X', print_hexadecimal_upp}, {'p', print_pointer},
                {'r', print_rev_string}, {'R', print_rot}
        };

        size_t place_holders = sizeof(specifiers) / sizeof(specifiers[0]);

        va_start(ptr, format);

        while (*format != '\0')
        {
                if (*format == '%')
                {
                        format++;
                        for (n = 0; n < place_holders; n++)
                        {
                                if (*format  == specifiers[n].format)
                                {
                                        count += specifiers[n].printer(ptr);
                                        break;
                                }
		       }
                }
                else
                {
                        _putchar(*format);
                        count++;
                }
        }
        va_end(ptr);
        return (count);
}
