#ifndef PRINT_HANDLERS_
#define PRINT_ HANDLERS_

#include <stdarg.h>

/*Handler function prototypes*/



int print_integer(va_list args);
int print_decimal(va_list args);
int print_pointer(va_list args);
int print_rot(va_list args);
int print_binary(va_list args);


#endif
