#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: head of list
 * @index: index of list
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *mp = *head;

	if (*head == NULL)
		return (-1);
	for (; index != 0; index--)
	{
		if (mp == NULL)
			return (-1);
		mp = mp->next;
	}
	if (mp == *head)
	{
		*head = mp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		mp->prev->next = mp->next;
		if (mp->next != NULL)
			mp->next->prev = mp->prev;
	}
	free(mp);
	return (1);
}
