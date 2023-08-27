#include <stdio.h>
#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: print pointer
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}
