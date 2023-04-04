#include "lists.h"
/**
 * sum_listint - sum of all the data (n) of a list
 * @head: pointer to list
 * Return : the sum of all the data (n) of a list
*/
int sum_listint(listint_t *head)
{
int add;

add = 0;

while (head)
{
add += head->n;
head = head->next;
}
return (add);
}
