#include "lists.h"
/**
 * free_listint2 - free
 * @head: pointer to the struct
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
listint_t *current;
if (head == NULL || *head == NULL)
{
return;
}
while (*head != NULL)
{
current = *head;
*head = current->next;
free(current);
}
*head = NULL;
}
