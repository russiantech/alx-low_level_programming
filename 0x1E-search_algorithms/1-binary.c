#include "search_algos.h"

/**
 * printer - Prints an array
 * @array: Target array
 * @low: Left index of @array
 * @high: Right index of @array
 */
void printer(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i == high)
			printf("\n");
		else
			printf(", ");
	}
}

/**
 * binary_search - Searches 4 a value in sorted array via Binary search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: Index where value is located,
 * or -1 if not present or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t high, low, mid;

	if (!array || size == 0)
		return (-1);

	high = size - 1;
	low = 0;

	while (high >= low)
	{
		printer(array, low, high);
		mid = (high + low) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
	}

	return (-1);
}
