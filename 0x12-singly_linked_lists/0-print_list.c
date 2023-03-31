#include "lists.h"
/**
 * print_list - Entry point
 * Description: print elements in a linked list
 * @h: pointer to head first node
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		node_count++;
	}

	return (node_count);
}
