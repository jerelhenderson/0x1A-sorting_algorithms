#include "sort.h"


/**
 * insertion_sort_list - sort DLL in asc order using insertion algorithm
 *
 * @list: given list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp = *list;
	listint_t *check = *list;

	if (*list == NULL || list == NULL)
		return;
	while (check->next != NULL)
	{
		current = *list;
		check = *list;
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
				}
				else
				{
					temp = temp->prev;
					temp->next = check;
					current->prev = check;
					current->next = check->next;
					check->next = current;
				}
				print_list(*list);
				break;
			}
			current = current->next;
			temp = current;
		}
	}
}
