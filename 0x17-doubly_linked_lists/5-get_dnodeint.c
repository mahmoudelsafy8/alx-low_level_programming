#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node
 * @head: head of list
 * @index: index of the node
 * Return: NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
