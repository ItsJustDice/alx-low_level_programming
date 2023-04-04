#include "lists.h"
/**
 * free_listint_safe - Entry point
 * Description: Frees a linked list of integers
 * @h: pointer to the head of the list
 * Return: size of list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t hip = 0;
	/* sets variable to 0 */
	listint_t *temp;
	/* declares variable of present node without setting */
	while (*h != NULL)
	{
		hip++;
		/* accrual count for each node */
		temp = *h;
		/* saves current node in "temp" variable */
		*h = (*h)->next;
		/*moves head to following node */
		free(temp);
		if (temp <= *h)
			/* checks if there's a cycle within list */
		{
			printf("-> [%p] %d\n", (void *)*h, (*h)->n);
			*h = NULL;
			/* set head to NULL if there's a cycle */
			exit(98);
			/*exits with status 98 if there's a cycle */
		}
	}
	return (hip);
}
