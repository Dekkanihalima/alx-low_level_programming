#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t counter = 0;
	const listint_t *tmp_n = head;
	const listint_t *l_n = NULL;
	size_t number_n;

	while (tmp_n != NULL)
	{
		printf("[%p] %d\n", (void *)tmp_n, tmp_n, tmp_n->n);
		counter++;
		tmp_n = tmp_n->next;
		l_n = head;
		number_n = 0;
		for (size_t i = 0; i < counter; i++)
		{
			if (tmp_n == l_n)
			{
				printf("->[%p] %d\n", (void *)tmp_n, tmp_n->);
				return (counter);
			}
			l_n = l_n->next;
			number_n++;
		}
	}
	return (counter);
}
