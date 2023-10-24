#include "lists.h"
/**
 * pop_listint - delete a node
 * @head: pointer to the struct
 * Return: deleted num.
 */
int pop_listint(listint_t **head)
{
int del_num;
listint_t *current;
if (head == NULL || *head == NULL)
{
return (0);
}
current = *head;
del_num = current->n;
*head = current->next;
free(current);
return (del_num);
}
