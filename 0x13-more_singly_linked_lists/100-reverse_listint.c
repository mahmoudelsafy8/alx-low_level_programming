#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL;
	listint_t *prev = NULL;

	if (!head || !*head)
		return (NULL);
	prev = *head;
	*head = NULL;
	while (prev)
	{
		next = prev->next;
		prev->next = *head;
		*head = prev;
		prev = next;
	}
	return (*head);
}
