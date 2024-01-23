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
 * selection_sort - Sort an array of integers in ascending order
 * using the selection sort algorithm
 * @array : array of integer
 * @size size of array
 * Description : This prints the array after each swap is done
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
