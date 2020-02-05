#include "sort.h"

/**
 * quick_sort - a function that sorts an array of integers in ascending
 * order using the Quick sort algorithm
 * @array: an array
 * @size: size of the array
 * return: NULL
 */
void quick_sort_helper(int *array, size_t size)
{
	size_t i;
	size_t j;
	int swap;
	size_t pivot = size - 1;

	if (array[0] > array[pivot])
	{
		swap = array[0];
		array[0] = array[pivot];
		array[pivot] = swap;
		print_array(array, size);
	}
	i = 0;
	for (j = 1; j <= size - 1; j++)
	{
		if (array[j] > array[pivot])
		{
			continue;
		}
		else
		{
			swap = array[i + 1];
			array[i + 1] = array[j];
			array[j] = swap;
			i++;
			print_array(array, size);
		}
	}
	if (array[i] < array[size - 1])
	{
		quick_sort(array, size/2);
	}
	if (array[i] > array[size - 1])
	{
		quick_sort(array, (size/2) + 1);
	}
}
