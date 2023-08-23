#include <unistd.h>
#include <string.h>
#include "main.h"
#include "print_handlers.h"

/**
 *my_function - print buffer.
 *@fd: file descriptor.
 */


void my_function(int fd)
{
	ssize_t bytes_written = write(fd, buffer, strlen(buffer));

	char buffer[1024];

	_memset(buffer, 0, sizeof(buffer));

	if (bytes_written == -1)
	{
		perror("Error writing to file descriptor");
                return;

	}
	return;
}
