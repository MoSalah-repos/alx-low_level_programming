#include "lists.h"

/**
 * pop_listint - deletes the head node of a `listint_t` linked list
 * @head: double pointer to head node of linked list
 * Return: the head node's data (n)
 */

int pop_listint(listint_t **head)
{
	int num;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (0);

	tmp = *head;
	num = tmp->n;
	*head = tmp->next;
	free(tmp);

	return (num);
}
