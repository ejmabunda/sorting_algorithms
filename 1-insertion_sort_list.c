#include <stdlib.h>

#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of
 * integers in ascending order using the insertion sort
 * algorithm.
 * @list: the list to be sorted.
 *
 * Return: this function does not return any value.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head;
	int ix;

	if (*list == NULL || list == NULL)
		return;  /* Nothing to sort. */

	/* Start at the second node. */
	head = (*list)->next;
	ix = 1;

	while (head != NULL)
	{
		swap_list(list, head, ix);

		/* Move to next node */
		head = head->next;
		ix++;
	}
}

/**
 * swap_list - Swaps two adjacent nodes of a doubly linked list.
 * @list: The list.
 * @head: Pointer to the rightmost node to swap.
 * @ix: Position of @head in @list.
 *
 * Return: This function does not return any value.
 */
void swap_list(listint_t **list, listint_t *head, int ix)
{
	listint_t *tail, *temp;
	int a;

	temp = head;
	tail = temp->prev;

	for (a = ix; a >= 0; a--)
	{
		if (tail == NULL || temp->n >= tail->n)
			break;  /* Preceding nodes sorted. */

		/* Swap next pointers. */
		tail->next = temp->next;
		temp->next = tail;

		/* Swap prev pointers. */
		temp->prev = tail->prev;
		tail->prev = temp;

		/* Update adjacent node pointers. */
		if (tail->next != NULL)
			tail->next->prev = tail;
		if (temp->prev != NULL)
			temp->prev->next = temp;
		else
			*list = temp;

		/* Move to the previous node. */
		tail = temp->prev;

		print_list(*list);
	}
}
