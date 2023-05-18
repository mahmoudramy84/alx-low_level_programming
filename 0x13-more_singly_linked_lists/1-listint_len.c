#include "lists.h"
/**
 * listint_len -Returns the number of elements in a linked list.
 * @h: Pointer to single linked list.
 * Return: the number of elements.
 */
size_t listint_len(const listint_t *h)
{
size_t nelem;
nelem = 0;

while (h != NULL)
{
h = h->next;
nelem++;
}
return (nelem);
}
