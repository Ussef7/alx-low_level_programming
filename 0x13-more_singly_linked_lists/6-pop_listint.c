#include "lists.h"

/**
 * pop_listint - Used to be deleting the head node of the  linked list
 * @head: Pointes to first element in linked list
 *
 * Return: The deleted data OR 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int numBer;

	if (!head || !*head)
		return (0);

	numBer = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (numBer);
}
