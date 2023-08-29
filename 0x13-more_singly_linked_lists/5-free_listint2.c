#include "lists.h"
/**
 * free_listint2 - frees a listint_t list.
 * @head: list to be freed
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *frees;

	if (head == NULL)
		return;
	while (*head)
	{
		frees = (*head)->next;
		free(*head);
		*head = frees;
	}
	*head = NULL;
}
