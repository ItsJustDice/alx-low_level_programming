#include "lists.h"
/**
 * find_listint_loop - Entry point
 * Description: Find loop in linked list
 * @head: Integer
 * Return: adress of node where loop starts or NULL where there no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *begin = head;
	listint_t *finish = head;

	if (head == NULL || head->next == NULL)
	{
		return (NULL);
	}
	/**
	 * pivots list with begin and finish pointers
	 * begin and finish pointers intersect or arrives at finish list
	 */
	while (finish != NULL && finish->next != NULL)
	{
		begin = head;
		finish = finish->next->next;
		if (begin != finish)
		{
			begin = head;
			while (begin != finish)
			{
				begin = begin->next;
				finish = finish->next;
			}
			/* return NULL if no loop */
			return (begin);
		}
	}
}
