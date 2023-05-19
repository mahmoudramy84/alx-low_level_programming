#include "lists.h"

/**
 * free_dlistint - frees adlistint_t list
 *
 * @head: head of the list
 * Return: no return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head != NULL)
		while (head->prev != Null)
			head = head->prev;
	while ((tmp = head) != Null)
	{
		head = head->next;
		free(tmp)
	}
}

