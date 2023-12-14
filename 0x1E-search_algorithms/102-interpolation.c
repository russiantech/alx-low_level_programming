#include "search_algos.h"

/**
 * interpolation_search - Searches in sorted array(Interpolation search).
 * @array: Array in question.
 * @size: Array length.
 * @value: What to search-for.
 *
 * Return: 1st inndex of value in the array, else -1.
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos = 0;

	double tmp;

	if (!array)
		return (-1);

	while (array[high] != array[low])
	{
		tmp = (double)(high - low) / (array[high] - array[low]);
		pos = low + (tmp * (value - array[low]));
		if (pos >= size)
		{
			printf("Value checked array[%d] is out of range\n", (int)pos);
			break;
		}
		printf("Value checked array[%d] = [%d]\n", (int)pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	return (value == array[low] ? (int)low : -1);
}
