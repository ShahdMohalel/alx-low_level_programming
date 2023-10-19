#include "lists.h"
/**
 * add_node - print linked list
 * @head: pointer to the struct
 * @str: string.
 * Return: address to new node of.
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_head;
new_head = malloc(sizeof(list_t));
if (new_head == NULL)
{
return (NULL);
}
if (str == NULL)
{
return (NULL);
}
if (head == NULL)
{
return (NULL);
}
new_head->str = strdup(str);
new_head->next = *head;
*head = new_head;
if (head == NULL)
{
return (NULL);
}
return (new_head);
}
