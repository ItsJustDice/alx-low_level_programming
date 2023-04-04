#include "lists.h"
/**
 * sum_listint - Entry point
 * Description: returns the sum of all the data (n) of a listint_t linked list
 * @head: Integer
 * Return: 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		/* adds value to current node */
		sum += head->n;
		/* moves to following node */
		head = head->next;
	}

	return (sum);
}
