#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer
 * @idx: index of the list where the new node should be added.
 * Index starts at 0
 * @n: input
 * Return:the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *node = *head;

	if (!new || !head)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (x = 0; node && x < idx; x++)
	{
		if (x == idx - 1)
		{
			new->next = node->next;
			node->next = new;
			return (new);
		}
		else
			node = node->next;
	}
	return (NULL);
}
