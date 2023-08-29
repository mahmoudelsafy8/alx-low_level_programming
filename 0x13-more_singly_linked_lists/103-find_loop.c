#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: node
 * Return: The address of the node where the loop starts.
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *poin;
	listint_t *n;

	if (head == NULL)
		return (NULL);
	for (n = head->next; n != NULL; n = n->next)
	{
		if (n == n->next)
			return (n);
		for (poin = head; poin != n; poin = poin->next)
			if (poin == n->next)
				return (n->next);
	}
	return (NULL);
}
