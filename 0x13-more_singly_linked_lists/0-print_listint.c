#include "lists.h"
/**
 * print_listint - Entry point
 * Description: prints all the elements of a listint_t list
 * @h: Integer
 * Return: return to number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t matrix = 0;
	/* hatched to keep track of the number of nodes */

	while (h)
	{
		printf("%d\n", h->n);
		matrix++;
		h = h->next;
	}
	/*"h" is next node, "next" is member of current node and moves loop forward*/
	return (matrix);
}
