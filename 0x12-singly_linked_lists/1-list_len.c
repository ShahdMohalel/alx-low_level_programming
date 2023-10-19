#include "lists.h"
/**
 * list_len - print linked list
 * @h: pointer to the struct
 * Return: num. of nodes
 */
size_t list_len(const list_t *h)
{
int l = 0;
const list_t *current = h;
while (current != NULL)
{
if (current->str == NULL)
{
return (l++);
}
else
{
l++;
}
current = current->next;
}
return (l);
}
