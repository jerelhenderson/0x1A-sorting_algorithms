#include "sort.h"


/**
 * insertion_sort_list - sort DLL in asc order using insertion algorithm
 *
 * @list: given list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL;
	listint_t *temp = NULL;
	listint_t *check = NULL;

	current = *list;
	temp = *list;
	check = *list;

	while (check->next != NULL)
	{
		while (check->next != NULL)
		{
			check = check->next;
			check->prev = current;
			if (current->n > check->n)
			{
				if (current->prev == NULL)
				{
					*list = check;
					current = *list;
					check = temp;
					check->next = current->next;
					check->prev = current;
					current->next = check;
					current->prev = NULL;
					temp = current;
				}
				else
				{
					temp = temp->prev;
					temp->next = check;
					current->prev = check;
					check->prev = temp;
					current->next = check->next;
					check->next = current;
				}
				print_list(*list);
				current = *list;
				check = *list;
				temp = *list;
				break;
			}
			check = current->next;
			current = current->next;
			temp = current;
		}
	}
}
