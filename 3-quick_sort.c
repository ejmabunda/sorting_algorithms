#include <stdlib.h>
#include "sort.h"

/**
 * quick_sort - Sorts an array of integers in ascending
 * order using the quick sort algorithm. Initiates the sorting.
 * @array: The array to sort.
 * @size: The size of @array.
 *
 * Return: This function does not return any value.
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;  /* Nothing to sort. */

	quick_sort_helper(array, size, 0, size - 1);
}

/**
 * quick_sort_helper - Helper function for the quick sort
 * algorithm, handles the sorting.
 * @array: The array to sort.
 * @size: The size of the array.
 * @low: First item in partition.
 * @high: Last item in partition.
 *
 * Return: This function does not return any value.
 */
void quick_sort_helper(int *array, size_t size, int low, int high)
{
	int ix;  /* Stores the partition index. */

	if (low < high)
	{
		/* Get partition index */
		ix = lomuto_partition(array, size, low, high);

		/* Sort left of partition */
		quick_sort_helper(array, size, low, ix - 1);

		/* Sort remainder of partition */
		quick_sort_helper(array, size, ix + 1, high);
	}
}

/**
 * lomuto_partition - Partitions an array using the Lomuto
 * partition scheme.
 * @array: The array to partition.
 * @size: The size of the array.
 * @low: The first item of the partition.
 * @high: The last item of the partition.
 *
 * Return: The pivot of the partition.
 */
int lomuto_partition(int *array, size_t size, int low, int high)
{
	int pivot, i, j;

	pivot = array[high];
	i = low - 1;
	j = low;

	for (j = low; j <= high - 1; j++)
	{
		/* If current <= pivot swap. */
		if (array[j] <= pivot)
		{
			i++;
			swap_array(array, i, j);
			print_array(array, size);
		}
	}
	swap_array(array, i + 1, high);
	print_array(array, size);
	return (i + 1);
}

/**
 * swap_array - Swaps two items of an array.
 * @array: Array where the items are stored.
 * @a: Index of the first item.
 * @b: Index of the second item.
 *
 * Return: This function does not return any value.
 */
void swap_array(int *array, int a, int b)
{
	int temp;

	temp = array[a];
	array[a] = array[b];
	array[b] = temp;
}
