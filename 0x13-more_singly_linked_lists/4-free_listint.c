#include "lists.h"
/**
 * free_listint - add end node
 * @head: pointer to the struct
 * Return: no return.
 */
void free_listint(listint_t *head)
{
listint_t *current;
while (head != NULL)
{
current = head;
head = head->next;
free(current);
}
}
