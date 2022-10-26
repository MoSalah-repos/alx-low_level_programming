#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data (n) in a linked list
 * @head: first node in the linked list
 *
 * Return: summation of data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
