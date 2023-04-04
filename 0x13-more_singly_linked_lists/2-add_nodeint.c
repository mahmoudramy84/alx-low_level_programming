#include "lists.h"
/**
 * listint_t -adds anew node at the beginning of alist.
 * @head: pointer to list.
 * @n: Numper to add.
 * Return: address of the new elemnt, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (new != NULL)
{
new->n = n;
new->next = *head;
}
else
return (NULL);
if (*head != NULL)
new->next = *head;
*head = new;
return (new);
}
