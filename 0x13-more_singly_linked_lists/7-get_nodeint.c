#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t.
 * @head: node
 * @index: he node, starting at 0
 * Return:NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *node = head;

	while (node && x < index)
	{
		node = node->next;
		x++;
	}
	return (node ? node : NULL);
}
