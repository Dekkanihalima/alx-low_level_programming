#include "lists.h"

/**
 * print_listint - which displays all the elements of a listint_t list.
 * @h: linked list of type listint-t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		number++;
	}

	return (number);
}

