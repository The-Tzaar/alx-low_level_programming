#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t num_elements = 0;
	int node_diff;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		node_diff = *h - (*h)->next;
		if (node_diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			num_elements++;
		}
		else
		{
			free(*h);
			*h = NULL;
			num_elements++;
			break;
		}
	}

	*h = NULL;

	return (num_elements);
}

