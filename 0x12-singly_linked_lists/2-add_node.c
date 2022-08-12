#include "lists.h"
#include <string.h>

/**
 * add_note - A function that adds a new node at the beginning of a list
 * @head: pointer to a list_t's pointer that
 * that points to the head struct
 * @str: pointer to string that adds as node
 * Return: pointer to new head of list, NULL on failure
 */

list_t *add_note(list_t **head, const char *str)
{
	list_t *temp;
	int length = 0;

	temp = malloc(sizeof(list_t);
	if (temp == NULL)
		return (NULL);
	while (str[length])
	{
		length++;
	}
	temp->len = length;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
