#include "sort.h"

/**
 *
 *
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	size_t pos;
	size_t next;
	size_t swapped;

	j = 0;
	swapped = 0;

	while (j < size - 1)
	{
		i = 0;
		while (i < size - 1)
		{
			if (array[i] > array[i + 1])
			{
				pos = array[i + 1];
				next = array[i];
				array[i] = pos;
				array[i + 1] = next;
				print_array(array, size);
				swapped = 1;
			}
			i++;
		}
		if (swapped == 0)
			break;
		swapped = 0;
	}
	j++;
}

