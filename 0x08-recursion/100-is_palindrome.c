#include "main.h"
/**
 * _strlen_recursion - returns te length of str
 * @s: str
 * Return: str length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - compares eac character of the str
 * @s: str
 * @n1: smallest iterator
 * @n2: biggest iterator
 * Retuen: .
 */
int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - checks if a str is palindrome
 * @s: str
 * Return: 1 if s is palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
