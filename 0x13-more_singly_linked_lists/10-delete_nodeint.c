#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list.
 * @head: pointer
 * @index: is the index of the node that should be deleted
 * Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *x = NULL;
	listint_t *node = *head;
	unsigned int y = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(node);
		return (1);
	}
	while (y < index - 1)
	{
		if (!node || !(node->next))
			return (-1);
		node = node->next;
		y++;
	}
	x = node->next;
	node->next = x->next;
	free(x);
	return (1);
}
