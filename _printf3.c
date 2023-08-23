#include "main.h"
#include <stddef.h>
#include <stdarg.h>
#include "print_handlers.h"

/**
*handle_format_specifiers - handle format specs.
*@format: The format string.
*@ptr: pointer.
*Return: number of printed characters.
*
*/

int handle_format_specifiers(const char *format, va_list ptr)
{
	int count = 0;
	size_t n = 0;

	FormatSpecifier specifiers[] = {
		{'s', print_string}, {'c', print_char},
		{'d', print_integer}, {'i', print_integer},
		{'b', print_binary}, {'u', print_unsigned},
		{'o', print_octal}, {'x', print_hexadecimal_low},
		{'X', print_HEX_U}, {'p', print_pointer},
		{'r', print_rev_string}, {'R', print_rot}
	};

	size_t place_holders = sizeof(specifiers) / sizeof(specifiers[0]);

	format++;

	for (n = 0; n < place_holders; n++)
	{
		if (*format == specifiers[n].format)
		{
			count += specifiers[n].printer(ptr);
			break;
		}
	}

	return (count);
}

/**
*_printf - print format string
*Return: number of characters printed.
*/
int _printf(const char *format, ...)
{
	va_list ptr;
	va_start(ptr, format);

	int count = 0;

	while (*format != '\0')
	{
		if (*format == '%')
		{

			count += handle_format_specifiers(format, ptr);
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
