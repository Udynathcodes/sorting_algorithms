#include "sort.h"

/**
 * swap_insert - swaps the values of two integers.
 * @x: pointer to the first value.
 * @y: The second integer`s pointer.
 *
 * Description: function that takes in two integer pointers
 * as parameters and swap thier values.
 */

void swap_insert(int x, int y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * selection_sort - Driver function that sort integers
 * base on seletion sorting algorithm.
 * @array: The array to be sorted.
 * @size: The array size.
 */

void selection_sort(int *array, size_t size)
{
	size_t a, b, min_index;

	for (a = 0; a < size - 1; a++)
	{
		min_index = a;
		for (b = a + 1; b < size; b++)
		{
			if (array[b] < array[min_index])
			{
				min_index = b;
			}
		}
		if (min_index != a)
		{
			swap_insert(&array[min_index], &array[a]);
			print_array(array, size);
		}
	}
}
