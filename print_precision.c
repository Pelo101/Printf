#include <stdio.h>
#include "main.h"

/**
*print_integer_with_precision - print integer.
*@value: parameter
*@precision: parameter
*/

void print_integer_with_precision(int value, int precision)
{
	int i;
	char buffer[20];
	int length = 0;

	if (value < 0)
	{
		buffer[length++] = '-';
		value = -value;
	}

	do {

		buffer[length++] = value % 10 + '0';
		value /= 10;
	} while (value > 0);


	while (length < precision)
	{
		buffer[length++] = '0';
	}

	for (i = 0; i < length / 2; i++)
	{
		char temp = buffer[i];

		buffer[i] = buffer[length - i - 1];
		buffer[length - i - 1] = temp;
	}

	for (i = 0; i < length; i++)

	{
		_putchar(buffer[i]);
	}
	_putchar('\n');
}


/**
*print_size - print characters with precision
*@format: parameter.
*@value: parameter.
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


