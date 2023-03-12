#include <stdio.h>
#include "main.h"

/**
 * main - prints the program name
 * @argc: num of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
