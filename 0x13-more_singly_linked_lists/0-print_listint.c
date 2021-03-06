#include "lists.h"
/**
 * print_listint - prints all the elements in a list
 * @h: pointer to the list to be printed
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
