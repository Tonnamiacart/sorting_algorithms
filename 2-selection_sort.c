#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
void bubble_sort(int *array, size_t size)
{
        size_t j, i;
        if (size < 2)
        {return;
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

/**
 * main - Entry point
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
