#include "sort.h"

/**
 * nodes_swap - Swap two nodes in a doubly-linked list.
 * @head: A pointer to the head of the doubly-linked list to be swaped..
 * @p1: A pointer to the first node to swap.
 * @p2: The second node to swap.
 */
void nodes_swap(listint_t **head, listint_t **p1, listint_t *p2)
{
	(*p1)->next = p2->next;
	if (p2->next != NULL)
		p2->next->prev = *p1;
	p2->prev = (*p1)->prev;
	p2->next = *p1;
	if ((*p1)->prev != NULL)
		(*p1)->prev->next = p2;
	else
		*head = p2;
	(*p1)->prev = p2;
	*p1 = p2->prev;
}

/**
 * insertion_sort_list - This function Sorts a doubly linked list of
 *                       integer using the insertion sort algorithm.
 * @list: A pointer to the head of a doubly-linked list
 * of integers to be sorted.
 *
 * Description: Prints the list after each integer
 * swap of the insertion sort algorithm.
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *go, *input, *tmp;

	if (*list == NULL || (*list)->next == NULL || list == NULL)
	{
		return;
	}

	for (go = (*list)->next; go != NULL; go = tmp)
	{
		tmp = go->next;
		input = go->prev;
		while (input != NULL && go->n < input->n)
		{
			nodes_swap(list, &input, go);
			print_list((const listint_t *)*list);
		}
	}
}
