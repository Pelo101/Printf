#include <stdio.h>

/**
*print_size - Print value with specified precision.
*@format: format string.
*@value: print value.
*/

void print_size(const char *format, int value)
{
	int precision = -1;


	while (*format)
	{
		if (*format == '.')
		{
			precision = 0;
			++format;
			while (*format >= '0' && *format <= '9')
			{

				precision = precision * 10 + (*format - '0');
				++format;
			}
			break;
		}
		++format;
	}

      print_integer_with_precision(value, precision);
}
