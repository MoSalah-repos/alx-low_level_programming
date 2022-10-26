#include "lists.h"

/**
 * get_nodeint_at_index - Get the nth node of a linked list `listint_t`
 * @head: pointer to head node
 * @index: index to find in linked list, starting at 0
 * Return: pointer to node or NULL if failed
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int count;

	tmp = head;
	count = 0;
	while (count < index)
	{
		if (tmp)
			tmp = tmp->next;
		else
			return (NULL);
		count++;
	}

	if (tmp)
		return (tmp);
	else
		return (NULL);
}
