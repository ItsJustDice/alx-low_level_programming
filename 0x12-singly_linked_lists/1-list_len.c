#include "lists.h"
/**
 * list_len - gets the number of nodes
 * @h: pointer to the head (first node)
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 1;

	/*if head is null return 0 nodes*/
	if (h == NULL)
		return (0);

	/*iterate through the nodes*/
	while (h->next != NULL)
	{
		/*go to the next node*/
		h = h->next;
		/*count nodes*/
		nodes++;
	}

	return (nodes);
}
