#include <unistd.h>
/**
 * _purchar()
 */
int _putchar(char c)
{
	return write(STDOUT_FILENO, &c, 1);
}

