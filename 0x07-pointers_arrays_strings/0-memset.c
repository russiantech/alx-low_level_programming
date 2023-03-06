#include "main.h"
/**
 * _memset - fill a block of memory with a specific val
 * @s: starting adrs+ of the memory to be filled
 * @b: the desired val
 * @n: num of bytes to be changed
 *
 * Return: changed [] with new val for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
