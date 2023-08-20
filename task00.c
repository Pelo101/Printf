#include "main.h"
#include <stdio.h>
/**
 * _printf - print formatted strings.
 * @format: format string.
 * Return: number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list ptr; char *s;
	int c, count = 0;

	va_start(ptr, format);
	while (*format != '\0')
	{
		if (*format == '%' && *(format + 1) != '\0')
		{
			format++;
			if (*format == 'c')
			{
				c = va_arg(ptr, int);
				_putchar(c);
				count++;
			}
			else if (*format == 's')
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
			else if (*format == '%')
			{
				_putchar('%');
				count++;
			}
			else
			{
				_putchar(*format);
				count++;
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(ptr);
	return (count);
}
