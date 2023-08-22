#include "main.h"
#include <stdarg.h>

/**
*print_rot -Print a string with ROT13 encryption.
*@args: list of arguments.
*/

int print_rot(va_list args)
{
	char *s = va_arg(args, char*);
	int count = 0;

	while (*s)
	{
		if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
		{
			char rotated = *s + 13;

			if ((*s <= 'z' && rotated > 'z') || (*s <= 'Z' && rotated > 'Z'))
			{
				rotated -= 26;
			}
			_putchar(rotated);
			count++;
		}
		else
		{
		  _putchar(*s);
		   count++;
		}
		s++;
	}

	return (count);
}



