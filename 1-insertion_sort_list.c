#include "sort.h"

/*
 * swap_nodes - Swaps two nodes in a doubly linked list
 *
 * @h: Double pointer to the head of the doubly linked list
 * @n1: Double pointer to the first node to be swapped.
 * @n2: double pointer to the second node to be swapped
 */
void swap_nodes(listint_t **h, listint_t **n1, listint_t *n2)
{
	listint_t *prev_n1 = (*n1)->prev;
	listint_t *next_n1 = (*n1)->next;

	(*n1)->prev = n2->prev;
	(*n1)->next = n2->next;

	n2->prev = prev_n1;
	n2->next = next_n1;

	if (prev_n1 != NULL)
	{
		prev_n1->next = n2;
	}
	else
	{
		*h = n2;
	}

	if (next_n1 != NULL)
	{
		next_n1->prev = n2;
	}

	*n1 = n2->prev;
}

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 * in ascending order
 *
 * @list: Double pointer to the head of the of the doubly linked list.
 */

void insertion_sort_list(listint_t **list)
{
	listint_t **traverse, **insert, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	traverse = (*list)->next;

	while (traverse != NULL)
	{
		temp = traverse->next;
		insert = traverse->prev;
		while (insert != NULL && traverse->n < insert->n)
		{
			swap_nodes(list, &insert, traverse);
			print_list((const listint_t *)*list);
		}
		traverse = temp;
	}

}
