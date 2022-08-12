#include "lists.h"
#include <stdio.h>

/**
 * print_list - function that prints a linked list
 * @h: pointer t head of list
 * Return: number of nodes in list as size_t
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != 0)
	{
		printf("[%u]", h->len);
		if (h->str == NULL)
		{
			printf("(nil)\n");
		}
		else
			printf("%s\n", h->str);
		nodes++;
		h = h->next;
	}
	return (nodes);
}