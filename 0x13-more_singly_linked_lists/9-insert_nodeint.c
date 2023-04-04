#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: Pointer to list
 * @idx: index of the list
 * @n: value of new node to be added
 * Return: address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *temp = *head;
unsigned int node;

new = malloc(sizeof(listint_t));

if (new == NULL)
return (NULL);

new->n = n;

if (idx == 0)
{
new->next = temp;
*head = new;
return (new);
}
