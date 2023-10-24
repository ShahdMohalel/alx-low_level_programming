#include "lists.h"
/**
 * listint_len - print len list
 * @h: pointer to the struct
 * Return: num. of nodes
 */
size_t listint_len(const listint_t *h)
{
int len = 0;
if (h == NULL)
{
return (0);
}
len++;
len += print_listint(h->next);
return (len);
}
