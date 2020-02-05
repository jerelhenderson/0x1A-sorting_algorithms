#include "sort.h"


/**
 * shell_sort - sorts array of ints in asc order using shell sort
 *
 * @array: given array
 * @size: array size
 */
void shell_sort(int *array, size_t size)
{
	size_t gap;
	size_t i, j;
	int temp;

	gap = 1;

	if (array == NULL)
		return;

	while (gap < size)
		gap = gap * 3 + 1;

	while (gap > 1)
	{
		gap = (gap - 1) / 3;
		i = gap;
		while (i < size)
		{
			j = i;
			temp = array[j];
			while (j >= gap && array[j - gap] > temp)
			{
				array[j] = array[j - gap];
				j = j - gap;
			}
			i++;
			array[j] = temp;
		}
		print_array(array, size);
	}
}
