#include <stdlib.h>
#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending
 * order using the selection sort algorithm.
 * @array: The array to be sorted.
 * @size: The size of @array.
 *
 * Return: This function does not return any value.
 */
void selection_sort(int *array, size_t size)
{
	size_t a, b, min_ix;
	int min, temp;

	if (size < 2)
		return;  /* Nothing to sort */

	for (a = 0; a < size; a++)
	{
		min = array[a];
		min_ix = a;

		/* Search for minimum in unsorted part */
		for (b = a; b < size; b++)
		{
			if (array[b] < min)
			{
				min = array[b];
				min_ix = b;
			}
		}

		/* Swap */
		temp = array[a];
		array[a] = min;
		array[min_ix] = temp;

		print_array(array, size);
	}
}
