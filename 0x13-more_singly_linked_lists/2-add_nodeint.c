#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of a linked list
 * @head: double pointer to head node
 * @n: int value to store in new node
 *
 * Return: NULL (failed)
 *         pointer to the new node (otherwise)
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;
	listint_t *new;

	tmp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	*head = new;

	if (tmp == NULL)
		new->next = NULL;
	else
		new->next = tmp;

	return (new);
}
