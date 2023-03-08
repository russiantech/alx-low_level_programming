#include "main.h"
/**
 * _strlen_recursion - cal length of a str
 * @s: str to count
 *
 * Return: int val
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
