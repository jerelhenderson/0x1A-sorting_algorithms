#include "sort.h"

/**
 * selection_sort - a function that sorts an array of integers in ascending
 * order using the Selection sort algorithm
 * @array: an array of integers
 * @size: size of the array
 * return: NULL
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t j = 1;
	size_t min = 0;
	size_t temp;

	do {
	while (j < size)
		{
		if (array[min] > array[j])
			{
			min = j;
			j++;
			continue;
			}
		else
			j++;
		}
		temp = array[i];
		array[i] = array[min];
		array[min] = temp;
		print_array(array, size);
		i++;
		min = i;
		j = i + 1;
	} while (i < size - 1);
}
