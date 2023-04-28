#include "lists.h"

/**
 * print_listint - Prints elements of the  linked list
 * @h: linked the list of the type listint_t to be printed
 *
 * Return: The number of the nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
