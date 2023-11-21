#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *huge = head;
	listint_t *tiny = head;

	if (!head)
		return (NULL);
	while (huge && tiny && tiny->next)
	{
		tiny = tiny->next->next;
		huge = huge->next;
		if (tiny == huge)
		{
			huge = head;
			while (huge != tiny)
			{
				huge = huge->next;
				tiny = tiny->next;
			}
			return (tiny);
		}
	}
	return (NULL);
}
