#include <stdio.h>
#include "main.h"

/**
 * main - print no of args passed to the program
 * @argc: No of args
 * @argv: array of args
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/

	printf("%d\n", argc - 1);

	return (0);
}
