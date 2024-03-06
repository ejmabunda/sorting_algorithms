# Sorting Algorithms

This project includes the implementation of various sorting algorithms and their time complexities.

## Algorithms

### Bubble Sort
File: `0-bubble_sort.c`

Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted.

Time Complexity:
- Best: O(n)
- Average: O(n^2)
- Worst: O(n^2)

### Insertion Sort
File: `1-insertion_sort_list.c`

Insertion Sort is a simple sorting algorithm that builds the final sorted array one item at a time. It is much less efficient on large lists than more advanced algorithms such as quicksort, heapsort, or merge sort.

Time Complexity:
- Best: O(n)
- Average: O(n^2)
- Worst: O(n^2)

### Selection Sort
File: `2-selection_sort.c`

Selection Sort is a simple in-place comparison sorting algorithm. It has an O(n^2) time complexity, which makes it inefficient on large lists, and generally performs worse than the similar insertion sort.

Time Complexity:
- Best: O(n^2)
- Average: O(n^2)
- Worst: O(n^2)

### Quick Sort
File: `3-quick_sort.c`

Quick Sort is an efficient sorting algorithm, serving as a systematic method for placing the elements of an array in order. When implemented well, it can be about two or three times faster than its main competitors, merge sort and heapsort.

Time Complexity:
- Best: O(n log(n))
- Average: O(n log(n))
- Worst: O(n^2)

## Header File
File: `sort.h`

This file contains type declarations and prototypes for the sorting algorithms.
