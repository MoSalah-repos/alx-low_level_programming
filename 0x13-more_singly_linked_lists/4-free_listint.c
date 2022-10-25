#include "lists.h"

/**
 * free_listint - free a linked list called 'listint_t'
 * @head: head of linked list
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
