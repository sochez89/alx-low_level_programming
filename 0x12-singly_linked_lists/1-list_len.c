#include "lists.h"

/**
 * list_len - function that returns number of elements
 * in a linked list
 * @h: head of the linked list
 * Return: number of nodes as size_t
 */

size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
