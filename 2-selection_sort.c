#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void swap(int *ls_vl, int *hg_vl)
{
	int temp;

	temp = *ls_vl;
	*ls_vl = *hg_vl;
	*hg_vl = temp;
}

/**
 * main - Entry point
 *
 *
 * Return: Always 0
 */
void selection_sort(int *array, size_t size)
{
	size_t j, i, min_value

		if (size < 2)
		{
			return;
		}


	for (i = 0; i < size; i++)
	{
		min_value = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min_value = j;
			}
		}
		if (min_value != i)
		{
			swap(&array[i], &array[min]);
			print_array(array, size);
		}
	}
}
