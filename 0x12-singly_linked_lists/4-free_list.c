#include "lists.h"
/**
 * free_list - free list
 * @head: pointer to the struct
 * Return: address to new node of.
 */
void free_list(list_t *head)
{
list_t *current;
while (head != NULL)
{
current = head;
head = head->next;
free(current->str);
free(current);
}
}
