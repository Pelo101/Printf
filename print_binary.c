#include "main.h"
#include <stdarg.h>
#include "print_handlers.h"

/**
*print_binary - prints b specifier.
*@args: arguments.
*Return: characters printed.
*/

int print_binary(va_list args)
{
	unsigned int mask = 1 << ((sizeof(unsigned int) * 8) - 1);
	unsigned int num = va_arg(args, unsigned int);
	int count = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (mask > 0)
	{
		_putchar((num & mask) ? '1' : '0');
		mask >>= 1;
		count++;
	}
	return (count);
}

