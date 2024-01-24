#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * selection_sort - Sort an array of integers in ascending order
 * using the selection sort algorithm
 * @array : array of integer
 * @size : size of array
 * Description : This prints the array after each swap is done
 */
void selection_sort(int *array, size_t size)
{
	size_t j, i, min_value, temp;

		if (array == NULL || size < 2)
			return;


	for (i = 0; i < size; i++)
	{
		min_value = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_value])
			{
				min_value = j;
			}
		}
		if (min_value != i)
		{
			temp = array[i];
			array[i] = array[min_value];
			array[min_value] = temp;

			print_array(array, size);
		}
	}
}
