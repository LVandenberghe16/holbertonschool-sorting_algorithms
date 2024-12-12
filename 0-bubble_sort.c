#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - Sorts array of integers in ascending order using Bubble Sort
 * @array: Pointer to the array of integers
 * @size: Number of elements in the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;
	int swapped;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				/* Swap the elements */
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

				/* Print the array after the swap */
				print_array(array, size);

				swapped = 1;
			}
		}
		/* If no elements were swapped, the array is sorted */
		if (!swapped)
			break;
	}
}
