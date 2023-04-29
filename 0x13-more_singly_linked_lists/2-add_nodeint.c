#include "lists.h"

/**
 * add_nodeint - Used to add a new node in the beginning of an linked list
 * @head: Pointes to the first node in the list
 * @n: Data insert in a new node
 *
 * Return: (Pointer) to the new node /or(NULL) if fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
