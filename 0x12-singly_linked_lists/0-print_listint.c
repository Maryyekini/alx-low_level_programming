#include "lists.h"

/**
 * print_listint - Prints all elements of a linked list
 * @h: Pointer to a list
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		++n;
	}
	return(n);
}
