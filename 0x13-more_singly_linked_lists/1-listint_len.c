#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: print pointer
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		h = h->next;
		x++;
	}
	return (x);
}
