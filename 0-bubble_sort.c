#include "sort.h"

/**
 * swap_values - swaps values of two integers.
 * @c: pointer to the first integer.
 * @d: pointer to the second integer.
 *
 * Description: Function that takes 2 integer as parameters
 * and swaps the values that they point to.
 */

void swap_values(int *c, int *d)
{
	int temp;

	temp = *c;
	*c = *d;
	*d = temp;
}

/**
 * bubble_sort - The driver code that implement the Bubble sort algorithm
 * @array: the array to be sorted.
 * @size: The size of the array to be sorted.
 *
 * Description: This function is the implementation of Bubble Sort algorithm 
 * that compares two values in an array and bubble the one 
 * with a bigger value to the right 
 * this is loop until they array is sorted in acending order.
 */

void bubble_sort(int *array, size_t size)
{
	size_t a, b, flag;

	if (array == NULL || size < 2)
	{
		return;
	}

	for (a = 0; a < size - 1; a++)
	{
		flag = 0;

		for (b = 0 b < size - 1 - i; b++)
		{
			if(array[b] > array[b + 1])
			{
				swap_values(&array[b], array[b + 1]);
				print_array(array, size);
				flag = 1;
			}
		}
		if (flag == 0);
			break;
	}
}
