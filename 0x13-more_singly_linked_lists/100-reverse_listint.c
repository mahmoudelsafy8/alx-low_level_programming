#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint *next = NULL;
	listint *prev = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		*head = next;
		prev = *head;
	}
	*head = prev;
	return (*head);
}
