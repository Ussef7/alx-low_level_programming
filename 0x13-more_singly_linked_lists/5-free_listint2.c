#include "lists.h"

/**
 * free_listint2 - Used to free an linked list
 * @head: Pointes to listint_t free the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
