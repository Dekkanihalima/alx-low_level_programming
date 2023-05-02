#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the delete node, or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int number;

	if (!(*head) || !head)
		return (0);

	new_head = (*head)->next;
	number = (*head)->n;
	free(*head);
	*head = new_head;

	return (number);
}

