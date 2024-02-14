#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for a value in a sorted array of integers
 * using Jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located
 * The array is sorted by default. If value is not present
 * in array or if array is NULL, return -1. Use the square root of the size
 * of the array as the jump step.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t index, jump_size;
	int lower, upper;

	if (!array)
		return (-1);
	jump_size = sqrt(size);
	for (index = 0; index < size; index += jump_size)
	{
		if (array[index] >= value || index == (size - jump_size)
				|| index == size - 1)
		{
			if (array[index] >= value)
			{
				upper = index;
				lower = index - jump_size;
			}
			else
			{
				upper = index + jump_size;
				lower = index;
				printf("Value checked array[%ld] = [%d]\n", index, array[index]);
			}
			printf("Value found between indexes [%d] and [%d]\n", lower, upper);
			for (; lower <= upper; lower++)
			{
				if (lower >= (int)size)
					break;
				printf("Value checked array[%d] = [%d]\n", lower, array[lower]);
				if (value == array[lower])
					return (lower);
			}
			return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
	}
	return (-1);
}
