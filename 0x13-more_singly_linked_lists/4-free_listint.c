#include "lists.h"
/**
 * free_listint - that frees a listint_t list.
 * @head: check the code
 */
void free_listint(listint_t *head)
{
	listint_t *frees;

	while (head)
	{
		frees = head->next;
		free(head);
		head = frees;
	}
}
