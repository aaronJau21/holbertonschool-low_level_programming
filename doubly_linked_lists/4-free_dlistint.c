#include "lists.h"

/**
 * free_dlistint - Free a double linked list
 *
 * @head: Pointer to the head of the new linked list.
 *
 * Return: Void.
 */

void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		if (head->next)
			free_dlistint(head->next);

		free(head);
	}
}
