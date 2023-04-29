#include "lists.h"

/**
 * listint_len - Returns a  number of the elements in the  linked lists
 * @h: linked to a list of an type listint_t to be traversed
 *
 * Return: The number of the nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
