#include "lists.h"
/**
 * sum_dlistint - Sums all the data of a dlistint_t list
 * @head: The head of the dlistint_t list
 * Return: The sum of all the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0; /* Set the sum variable to 0 at the start */

	while (head) /* Repeat loop until list's end and head pointer is NULL */
	{
		sum += head->n; /* Include the current node's value in total along with */
		head = head->next; /* Move the head pointer to the next node */
	}

	return (sum); /* return the sum of all node values */
}
