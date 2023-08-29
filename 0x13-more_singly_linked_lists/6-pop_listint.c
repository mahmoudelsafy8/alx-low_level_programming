#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t.
 * @head: pointer
 * Return: list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *frees;
	int n;

	if (!head || !*head)
		return (0);
	n = (*head)->n;
	frees = (*head)->next;
	free(*head);
	*head = frees;
	return (n);
}
