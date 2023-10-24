/**
 * print_listint - print linked list
 * @h: pointer to the struct
 * Return: num. of nodes
 */
size_t print_listint(const listint_t *h)
int len = 0;
int i;
if (h == NULL)
{
return (0);
}    
printf("%d\n", h->n);
len++;
len += print_listint(h->next);
return (len);
}
