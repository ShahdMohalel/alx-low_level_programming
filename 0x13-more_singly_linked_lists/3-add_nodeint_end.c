#include "lists.h"
/**
 * add_nodeint_end - add end node
 * @head: pointer to the struct
 * @n: num.
 * Return: address to new node of.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_tail;
listint_t *current;
new_tail = malloc(sizeof(listint_t));
if (new_tail == NULL)
{
return (NULL);
}
new_tail->n = n;
new_tail->next = NULL;
if (*head == NULL)
{
*head = new_tail;
}
else
{
current = *head;
while (current->next != NULL)
{
current = current->next;
}
current->next = new_tail;
}
return (new_tail);
}
