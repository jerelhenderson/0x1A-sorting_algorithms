#include "sort.h"

/**
 * insertion_sort_list - a function that sorts an array of integers in ascending
 * order using the insertion sort algorithm
 * @list: a linked list to sort
 * Return: NULL
 */
void insertion_sort_list(listint_t **list)
{
	size_t j;
	listint_t *temp;
	listint_t *swap;
	size_t swapped = 0;

	temp = (*list);
	swap = (*list);
	/* for looping over listint_t and checking if swap occurred */
	for (j = 1; &temp[j] != NULL || swapped == 0; j++)
	{
		swapped = 1;
		/* if listint_t[0] is bigger than listint_t[1] and so on down the line */
		if (&temp->n > &temp->next->n)
		{
			swap = temp->next;
			temp->next = temp;
			temp = swap;
			/* a swap happened so make swapped == 0 */ 
			swapped = 0;
                        /* print the listint_t after each swap */
			while (&temp->n != NULL)
			{
				temp = temp->next;
 				print_list(temp);
			}
		}
	}
}
