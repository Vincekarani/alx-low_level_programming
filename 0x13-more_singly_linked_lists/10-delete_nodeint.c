#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @index: index of the node to delete
 * @head: pointer to the first element in the list
 *
 * Return: 1 (Success), otherwise -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temporary = *head;
	listint_t *current = NULL;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temporary);
		return (1);
	}
	while (j < index - 1)
	{
		if (!temporary || !(temporary->next))
			return (-1);
		temporary = temporary->next;
		j++;
	}
	current = temporary->next;
	temporary->next = current->next;

	free(current);
	return (1);
}
