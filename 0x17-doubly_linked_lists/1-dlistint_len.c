#include "lists.h"

/**
 * print_dlistint - print number of elements in a linked dlistint_t list
 * @h: head of list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}