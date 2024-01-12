#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node
 * at a given position
 * @h: head of list
 * @idx: index of the list
 * @n: int of list
 * Return: NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *mp = *h, *new;

	if (idx == 0)
		return (add_dlistint(h, n));
	for (; idx != 1; idx--)
	{
		mp = mp->next;
		if (mp == NULL)
			return (NULL);
	}
	if (mp->next == NULL)
		return (add_dlistint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = mp;
	new->next = mp->next;
	mp->next->prev = new;
	mp->next = new;

	return (new);
}
