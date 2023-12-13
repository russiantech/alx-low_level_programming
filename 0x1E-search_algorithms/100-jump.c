#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array via Jump search.
 * @array: Pointer to 1st element of the array to search in.
 * @size: Num of elements in the array.
 * @value: What to search for.
 *
 * Return: The 1st index where value is located, or -1 if not found.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, start, end, block;

	if (!array || size == 0)
		return (-1);

	block = sqrt(size);
	start = 0;
	end = 0;

	printf("Value checked array[%lu] = [%d]\n", start, array[start]);

	while (end < size && array[end] < value)
	{
		start = end;
		end += block;

		if (start != 0 && end < size)
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

