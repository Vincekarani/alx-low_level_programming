#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @n: data to insert in the new element
 * @head: pointer to the first element in the list
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *original;
	listint_t *temporary = *head;
	original = malloc(sizeof(listint_t));
	if (!original)
		return (NULL);
	original->n = n;
	original->next = NULL;
	if (*head == NULL)
	{
		*head = original;
		return (original);
	}
	while (temporary->next)
		temporary = temporary->next;
	temporary->next = original;
	return (original);
}
