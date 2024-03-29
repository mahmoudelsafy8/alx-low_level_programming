#include "lists.h"
/**
 * sum_dlistint - sum of all the data (n)
 * @head: head of list
 * Return: 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
