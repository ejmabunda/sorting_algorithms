#ifndef SORT_H
#define SORT_H

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* Prints a list of integers */
void print_list(const listint_t *list);

/* Prints an array of integers */
void print_array(const int *array, size_t size);

/*
 * Sorts an array of integers in ascending order
 * using the bubble sort algorithm
 */
void bubble_sort(int *array, size_t size);

/*
 * Sorts a doubly linked list of integers in ascending
 * order using the insertion sort algorithm
 */
void insertion_sort_list(listint_t **list);

/* Swaps two adjacent nodes of a doubly linked list */
void swap_list(listint_t **list, listint_t *head, int ix);

/*
 * Sorts a doubly linked list of integers in ascending
 * order using the selection sort algorithm
 */
void selection_sort(int *array, size_t size);

/*
 * Sorts an array of integers in ascending
 * order using the quick sort algorithm
 */
void quick_sort(int *array, size_t size);

/*
 * Helper function the the quick_sort function,
 * handles the sorting
 */
void quick_sort_helper(int *array, size_t size, int low, int high);

/* Lomuto partition implementation */
int lomuto_partition(int *array, size_t size, int low, int high);

/* Swaps two items in an array. */
void swap_array(int *array, int a, int b);

#endif
