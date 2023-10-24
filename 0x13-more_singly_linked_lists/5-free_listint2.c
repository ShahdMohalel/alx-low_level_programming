#include "lists.h"
/**
 * add_nodeint_end - add end node
 * @head: pointer to the struct
 * @n: num.
 * Return: address to new node of.
 */
void free_listint2(listint_t **head)
{
listint_t *current;
while (*head != NULL)
{
current = *head;
*head = head->next;
free(current);
}
}
