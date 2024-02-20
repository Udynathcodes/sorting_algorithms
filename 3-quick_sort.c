#include "sort.h"

void swap_quick(int *a, int *b);
int lomuto_partition(int *array, int start, int end, size_t size);
void recursive_quick_sort(int *array, int right, int left, size_t size);
void quick_sort(int *array, size_t size);

/**
 * swap - Swaps two integers in an array
 * @a: Pointer to the first integer
 * @b: Pointer to the second integer
 */

void swap_quick(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * lomuto_partition - Function that Partitions the array
 * using the Lomuto scheme.
 * @array: The Array to be partitioned
 * @start: The Starting index of the partition
 * @end: The Ending index of the partition
 * @size: The Size of the array
 *
 * Return: The final index of the pivot
 */

int lomuto_partition(int *array, int start, int end, size_t size)
{
	int pivot = array[end];
	int x = start - 1;
	int y;

	for (y = start; y <= end - 1; y++)
	{
		if (array[y] <= pivot)
		{
			x++;
			if (x != y)
			{
				swap_quick(&array[x], &array[y]);
				print_array(array, size);
			}
		}
	}

	if (x + 1 != end)
	{
		swap_quick(&array[x + 1], &array[end]);
		print_array(array, size);
	}

	return (x + 1);
}

/**
 * recursive_quick_sort - Function that Recursively sorts an array using
 * the Lomuto partition scheme
 * @array: The Array to be sorted
 * @right: The Starting index of the partition
 * @left: The Ending index of the partition
 * @size: The Size of the array
 */

void recursive_quick_sort(int *array, int right, int left, size_t size)
{
	if (right < left)
	{
		int pivot_position = lomuto_partition(array, right, left, size);

		recursive_quick_sort(array, right, pivot_position - 1, size);
		recursive_quick_sort(array, pivot_position + 1, left, size);
	}
}

/**
 * quick_sort - Function Sorts an array of integers
 in ascending order using Quick sort.
 * @array: The Array to be sorted.
 * @size: The Size of the array.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	recursive_quick_sort(array, 0, size - 1, size);
}
