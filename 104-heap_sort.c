#include "sort.h"

/**
 * swap_heap - Swap two integers in an array.
 * @i: The first integer to swap.
 * @j: The second integer to swap.
 */

void swap_heap(int *i, int *j)
{
	int tmp;

	tmp = *i;
	*i = *j;
	*j = tmp;
}

/**
 * heapify - Function that Turn a binary tree into binary heap.
 * @array: An array representing a binary tree.
 * @size: size of the binary tree.
 * @base: index of the base row of the tree.
 * @parent: root index node of the binary tree.
 */

void heapify(int *array, size_t size, size_t base, size_t parent)
{
	size_t left, right, largest;

	left = 2 * parent + 1;
	right = 2 * parent + 2;
	largest = parent;

	if (left < base && array[left] > array[largest])
		largest = left;
	if (right < base && array[right] > array[largest])
		largest = right;

	if (largest != parent)
	{
		swap_heap(array + parent, array + largest);
		print_array(array, size);
		heapify(array, size, base, largest);
	}
}

/**
 * heap_sort - Sort an array of integers
 *             using the heap sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Function Implements the sift-down heap sort
 * algorithm.
 */

void heap_sort(int *array, size_t size)
{
	int udy;

	if (array == NULL || size < 2)
		return;

	for (udy = (size / 2) - 1; udy >= 0; udy--)
		heapify(array, size, size, udy);

	for (udy = size - 1; udy > 0; udy--)
	{
		swap_heap(array, array + udy);
		print_array(array, size);
		heapify(array, size, udy, 0);
	}
}
