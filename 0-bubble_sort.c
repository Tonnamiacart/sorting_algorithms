#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * swap - this swaps two integers in an array
 * @ls_vl: the first integer to be swapped
 *
 * @hg_vl: the second integer to be swapped
 */
void swap(int *ls_vl, int *hg_vl)
{
	int temp;

	temp = *ls_vl;
	*ls_vl = *hg_vl;
	*hg_vl = temp;
}

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the bubble sort algorithm
 *
 * @array: the array that is meant to be sorted
 * @size: size of the array
 * Return: none
 */
void bubble_sort(int *array, size_t size)
{
	size_t j, i;

	if (size < 2)
	{
		return;
	}


	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}
