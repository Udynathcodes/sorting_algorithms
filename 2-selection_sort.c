#include "sort.h"

/**
 * swap_insert - swaps the values of two integers.
 * @x: pointer to the first value.
 * @y: The second integer`s pointer.
 *
 * Description: function that takes in two integer pointers
 * as parameters and swap thier values.
 */

void swap_insert(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * selection_sort - Driver function Sort array of integers in ascending order
 *                  using the selection sort algorithm.
 * @array: An array of integers to be sorted.
 * @size: The size of the array to be sorted.
 *
 * Description: Prints the array after each swap
 * using the selestion .
 */

void selection_sort(int *array, size_t size)
{
	size_t a, b, min_index;

	if (array == NULL || size < 2)
		return;

	for (a = 0; a < size - a; a++)
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
