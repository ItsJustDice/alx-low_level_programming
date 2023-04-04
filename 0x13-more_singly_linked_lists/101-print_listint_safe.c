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
	while (head != NULL)
	{
		hop++;
		/* accrual count for each node */
		printf("[%p] %d\n", (void *)head, head->n);
		/* prints node's adress and value */
		if (head <= head->next)
			/* checks to see if there's a cycle in the list */
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			exit(98);
			/* exit with 98 if there's a cycle */
		}
		head = head->next;
		/* move head to next node */
	}
	return (hop);
}
