#include "lists.h"

/**
 * sum_listint - Used to calculate the sum of the data in the  listint_t list
 * @head: The first node in linked list
 *
 * Return: Result sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
