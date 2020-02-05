#include "sort.h"

/**
 * quick_sort - a function that sorts an array of integers in ascending
 * order using the Quick sort algorithm
 * @array: an array
 * @size: size of the array
 * return: NULL
 */
void quick_sort(int *array, size_t size)
{
	size_t i = array[0] - 1;
	size_t j;
	size_t swap;
	size_t pivot = size - 1;

	for (i = 0; i < size / 2; i++)
	{
		for (j = 0; j <= size - 1; j++)
		{
			if (array[j] > array[pivot])
			{
				continue;
			}
			else
			{
				i++;
				swap = array[j];
				array[j] = array[i];
				array[i] = swap;
				print_array(array, size);
			}
		}
		print_array(array, size);
		swap = array[pivot];
		array[pivot] = array[i + 1];
		array[i + 1] = swap;
		print_array(array, size);
	}
}
