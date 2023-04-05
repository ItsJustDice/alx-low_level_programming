#include "lists.h"
/**
 * print_listint_safe - Entry point
 * Description: Prints a linked list of integers
 * @head: Integer
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t hop = 0;
	/* sets count variable to 0 */
	const listint_t *temp;

	if (!head || !head->next)
	{
		return (0);
	}
	while (head != NULL)
	{
		/* sets present to head & shifts head to following node */
		temp = head;
		head = head->next;
		/* prints current node */
		printf("[%p] %d\n", (void *)head, head->n);
		/* prints node's adress and value */
		hop++;
		/* accrual count for each node */
		if (temp <= temp->next)
		{
			printf("-> [%p] %d\n", (void *)temp->next, temp->next->n);
			exit(98);
			/* exit with 98 if there's a cycle */
		}
	}
	return (hop);
}
