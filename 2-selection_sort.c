#include "sort.h"


/**
 * selection_sort - sort array of ints using selection algorithm
 *
 * @array: array to sort
 * @size: array size
 */
void selection_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	size_t min;
	size_t temp;
	size_t swapped;

	j = 0;
	min = 0;
	i = 1;

	if (size < 2)
		return;

	do {
		while (i < size)
		{
			if (array[min] > array[i])
			{
				min = i;
				swapped = 1;
			}
			i++;
		}
		temp = array[j];
		array[j] = array[min];
		array[min] = temp;
		if (swapped == 1)
			print_array(array, size);
		j++;
		min = j;
		i = j + 1;
		swapped = 0;
	} while (i < size - 1);
}
