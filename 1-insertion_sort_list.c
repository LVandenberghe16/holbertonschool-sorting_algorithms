#include "sort.h"

/**
 * insertion_sort_list - Sorts doubly linked list of integers, Insertion Sort
 * @list: Pointer to the head of the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *key, *prev;

	if (!list || !(*list) || !(*list)->next)
		return;

	current = (*list)->next;
	while (current)
	{
		key = current;
		prev = current->prev;

		while (prev && key->n < prev->n)
		{
			/* Swap nodes */
			if (prev->prev)
				prev->prev->next = key;
			if (key->next)
				key->next->prev = prev;

			prev->next = key->next;
			key->prev = prev->prev;
			key->next = prev;
			prev->prev = key;

			if (!key->prev)
				*list = key;

			prev = key->prev;
			print_list(*list);
		}
		current = current->next;
	}
}
