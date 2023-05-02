#include "lists.h"

/**
 * free_listint2 - Frees a listint_t linked list and sets the head pointer to NULL
 * @head: Double pointer to the head of the list
 **/
void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}

	*head = NULL;
}
