#include <unistd.h>
#include <string.h>
#include "main.h"
/**
 *my_function - print buffer.
 *@fd: file descriptor.
 */


void my_function(int fd)
{
	ssize_t bytes_written = write(fd, buffer, strlen(buffer));

	char buffer[1024];

	memset(buffer, 0, sizeof(buffer));

	if (bytes_written == -1)
	{
		return ;

	}
}


