#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *original;
	listint_t *temporary = *head;

	original = malloc(sizeof(listint_t));

	if (!original || !head)
		return (NULL);

	original->n = n;
	original->next = NULL;
	if (idx == 0)
	{
		original->next = *head;
		*head = original;
		return (original);
	}
	for (j = 0; temporary && j < idx; j++)
	{
		if (j == idx - 1)
		{
			original->next = temporary->next;
			temporary->next = original;
			return (original);
		}
		else
			temporary = temporary->next;
	}
	return (NULL);
}
