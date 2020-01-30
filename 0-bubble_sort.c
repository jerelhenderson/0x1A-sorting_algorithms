#include "sort.h"

/**
 * bubble_sort - a function that sorts an array of integers in ascending
 * order using the Bubble sort algorithm
 * @array: an array to sort
 * @size: size of the array
 * Return: NULL
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	size_t x;
	size_t swapped = 0;

	/* for looping over array and checking if swap occurred */
	for (j = 1; j <= size && swapped == 0; j++)
	{
		swapped = 1;
		for (i = 1; i < size; i++)
		{
			/* if array[0] is bigger than array[1] and so on down the line */
			if (array[i - 1] > array[i])
			{
				/* swap without a temp variable */
				array[i - 1] = array[i - 1] + array[i];
				array[i] = array[i - 1] - array[i];
				array[i - 1] = array[i - 1] - array[i];
				/* a swap happened so make swapped == 0 */
				swapped = 0;
				for (x = 0; x < size; x++)
				{
					if (x < size - 1)
						printf("%d, ", array[x]);
					else
						printf("%d", array[x]);
				}
				printf("\n");
			}
		}
	}
}
