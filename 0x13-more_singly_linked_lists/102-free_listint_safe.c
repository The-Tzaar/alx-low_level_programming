#include "lists.h"

/**
 * free_listint_safe - frees a listint_t linked list
 * @h: pointer to the head of the list
 *
 * Return: the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	listint_t *next = NULL;
	size_t count = 0;

	while (current)
	{
		next = current->next;
		free(current);
		count++;

	if (next && next >= current)
	{
		*h = NULL;
		exit(98);
	}

	current = next;
	}

	*h = NULL;
	return (count);
}
