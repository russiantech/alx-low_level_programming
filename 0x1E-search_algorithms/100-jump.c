#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array(Jump search algorithm)
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: The value to search for
 *
 * Return: The index of the first occurrence of @value, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, start = 0, end = 0, block = 0;

	if (!array || size == 0)
		return (-1);

	block = sqrt(size);
	printf("Value checked array[%lu] = [%d]\n", start, array[start]);

	while (array[end] < value)
	{
		start = end;
		end = end + block;

		if (start != 0)
			printf("Value checked array[%lu] = [%d]\n", start, array[start]);

		if (end >= size)
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", start, end);

	if (end >= size)
		end = size - 1;

	for (i = start; i <= end; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}

	return (-1);
}
