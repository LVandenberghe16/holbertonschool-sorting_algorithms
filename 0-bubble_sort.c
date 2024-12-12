#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - Sorts array of integers in ascending order using Bubble Sort
 * @array: Pointer to the array of integers
 * @size: Number of elements in the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, n;
	int temp;
	int swapped;

	if (!array || size < 2)
		return;

	n = size;
	do {
		swapped = 0;
		for (i = 1; i < n; i++)
		{
			if (array[i - 1] > array[i])
			{
				/* Swap the elements */
				temp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = temp;

				/* Print the array after the swap */
				print_array(array, size);

				swapped = 1;
			}
		}
		/* Reduce the range of comparison */
		n--;
	} while (swapped);
}
