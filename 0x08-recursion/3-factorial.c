#include "main.h"
/**
 * factorial - cal factorial of any num
 * @n: any num
 *
 * Return: int val of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-n);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
