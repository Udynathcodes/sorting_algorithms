#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <stdbool.h>
#include <stdarg.h>
#include <limits.h>
#include <float.h>
#include <assert.h>
#include <errno.h>

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

/* functions prototypes */
void swap_values(int *c, int *d);
void bubble_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void insertion_sort_list(listint_t **list);
void nodes_swap(listint_t **head, listint_t **p1, listint_t *p2);
void swap_insert(int *x, int *y);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void recursive_quick_sort(int *array, int right, int left, size_t size);
int lomuto_partition(int *array, int start, int end, size_t size);
void swap_quick(int *x, int *y);

#endif
