#include <stdlib.h>

#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending
 * order using the bubble sort algorithm.
 * @array: the array to be sorted.
 * @size: the size of the array.
 *
 * Return: this function does not return any value.
 */
void bubble_sort(int *array, size_t size)
{
	int swaps, temp;
	size_t ix;  /* index for traversing the array */

	if (size < 2)
		return;  /* Nothing to sort */

	do  {
		swaps = 0;
		for (ix = 0; ix < size; ix++)
		{
			if (array[ix] < array[ix - 1])
			{
				/* swap */
				temp = array[ix];
				array[ix] = array[ix - 1];
				array[ix - 1] = temp;

				print_array(array, size);
				swaps++;
			}
		}
	} while (swaps != 0);
}
