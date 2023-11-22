#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 *
 * @h: linked list for type listint_t to be printed
 *
 * Return: count
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
