#include "search_algos.h"
#include <stdio.h>

/**
 * interpolation_search - Searches in sorted array(Interpolation search)
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: The value to search for
 *
 * Return: The index of the first occurrence of @value, or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	if (!array || size == 0)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) /
					(array[high] - array[low])) *
				(value - array[low]));

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}