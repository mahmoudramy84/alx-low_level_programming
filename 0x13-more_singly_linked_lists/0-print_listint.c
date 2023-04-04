#include "lists.h"

/**
 *print_listint -prints all the elemnts of alist.
 *@h: singly linked list.
 *
 * Return: the numbers of node.
 */
size_t print_listint(const listint_t *h)
{
    size_t nelem;
    nelem = 0;

    while (h != NULL)
    {
        printf("%d\n", h->n);
        h = h->next;
        nelem++;
    }
    return (nelem);
}
