#include "lists.h"

/**
 * get_nodeint_at_index - To return a node in a certain index in an linked list
 * @head: The first node in the linked list
 * @index: The index of node to be returned
 *
 * Return: Pointes to the node/or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int s = 0;
	listint_t *temp = head;

	while (temp && s < index)
	{
		temp = temp->next;
		s++;
	}

	return (temp ? temp : NULL);
}
