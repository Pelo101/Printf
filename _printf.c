#include <stdarg.h>
#include "main.h"
#include "print_handlers.h"
#include <string.h>

/**
*print_buffer - print buffer.
*@char buffer : buffer.
*@buffer index.
*/

void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
	{
		write(1, buffer, *buff_ind);
		*buff_ind = 0;
	}
}


/**
*_printf - printf implentation.
*@format: format string.
*Return:  number of charactes.
*/
 int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	char buffer[1024];
	int buffer_index = 0;

	int count = 0;
	int printed;

	while (*format != '\0')
	{
		 if (*format == '%')
		 {
			 (*format)++;
			  printed = handle_print(format, &buffer_index, args, buffer, 0, 0, 0, 0);
			 if (printed == -1)
			 {	va_end(args);
				return (-1);
			 }
			count += printed;
		}
		else
		{
			buffer[buffer_index++] = *format;
			if (buffer_index >= sizeof(buffer) - 1)
			{	buffer[buffer_index] = '\0';
				write(1, buffer, buffer_index);
				buffer_index = 0;
			}
			count++;
		}
		format++;
	}
	print_buffer(buffer, &buffer_index);
	va_end(args);
	return (count);
}


