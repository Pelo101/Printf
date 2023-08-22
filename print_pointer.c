#include "main.h"
#include <stdarg.h>

/**
* print_pointer - Print a pointer address in hexadecimal format.
* @args: list of arguments.
*Return: prints pointer.
*/
int print_pointer(va_list args)
{
	void *ptr = va_arg(args, void*);
	unsigned long int num = (unsigned long) ptr;
	int count = 0;
	char hexString[20];
	int index = 0;
	int i;

	_putchar('0');
	_putchar('x');


	if (num == 0)
	{
		hexString[index++] = '0';
	}
	else
	{
		while (num > 0)
		{
			int digit = num % 16;

			hexString[index++] = (digit < 10) ? ('0' + digit) : ('a' + digit - 10);
			num /= 16;
			count++;
		}

	}

	for (i = index - 1; i >= 0; i--)
	{
		_putchar(hexString[i]);
	}

	return (count + 2);
}


