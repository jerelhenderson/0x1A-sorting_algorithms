#include "sort.h"

/**
 * quick_sort - a function that sorts an array of integers in ascending
 * order using the Quick sort algorithm
 * @array: an array
 * @size: size of the array
 * return: pivot
 */
void quick_sort(int *array, size_t size)
{
	size_t i;
	size_t x;
	size_t pivot = 0;

	do {
		for (i = 0; i <= size - 1; i++)
		{
			if (array[i] > array[size - 1])
				continue;
			else
			{
				array[pivot] = array[pivot] + array[i];
				array[i] = array[pivot] - array[i];
				array[pivot] = array[pivot] - array[i];
				for (x = 0; x < size; x++)
				{
					if (x < size - 1)
						printf("%d, ", array[x]);
					else
						printf("%d", array[x]);
				}
				printf("\n");
				pivot++;
			}
		}
	} while ();
	array[pivot] = array[pivot] + array[size - 1];
	array[size - 1] = array[pivot] - array[size - 1];
	array[pivot] = array[pivot] - array[size - 1];
}
