#include "lists.h"
/**
 * print_list - print linked list
 * @h: pointer to the struct
 * Return: num. of nodes
 */
size_t print_list(const list_t *h)
{
int l = 0;
const list_t *current = h;
while (current != NULL)
{
if (current->str == NULL)
{
printf("[0] (nil)\n");
l++;
}
else
{
printf("[%u] %s\n", current->len, current->str);
l++;
}
current = current->next;
}
return (l);
}
