#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at index of a linked list
 * @head: double header to head of linked list
 * @index: index of node to delete, starting at 0
 *
 * Return: 1 if success, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *hold;
	unsigned int i;

	i = 0;
	if (*head == NULL)
		return (-1);

	while (i < index)
	{
		i++;
		hold = tmp;
		if (tmp->next)
			tmp = tmp->next;
		else
			return (-1);
	}

	if (index == 0)
		*head = tmp->next;
	else if (tmp->next)
		hold->next = tmp->next;
	else
		hold->next = NULL;

	free(tmp);
	return (1);
}
