#include "sort.h"

/**
 * partition - Partitions the array using Lomuto scheme
 * @array: Pointer to the array of integers
 * @low: Starting index of the partition
 * @high: Ending index of the partition
 * @size: Total size of the array
 * Return: Index of the pivot
 */
size_t partition(int *array, size_t low, size_t high, size_t size)
{
	int pivot = array[high];
	size_t i = low, j;
	int temp;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			if (i != j)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
			i++;
		}
	}
	if (i != high)
	{
		temp = array[i];
		array[i] = array[high];
		array[high] = temp;
		print_array(array, size);
	}
	return (i);
}

/**
 * quick_sort_rec - Recursively sorts subarrays
 * @array: Pointer to the array of integers
 * @low: Starting index of the partition
 * @high: Ending index of the partition
 * @size: Total size of the array
 */
void quick_sort_rec(int *array, size_t low, size_t high, size_t size)
{
	size_t pi;

	if (low < high)
	{
		pi = partition(array, low, high, size);
		if (pi > 0)
			quick_sort_rec(array, low, pi - 1, size);
		quick_sort_rec(array, pi + 1, high, size);
	}
}

/**
 * quick_sort - Sorts an array of integers in ascending order using Quick Sort
 * @array: Pointer to the array of integers
 * @size: Number of elements in the array
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	quick_sort_rec(array, 0, size - 1, size);
}
