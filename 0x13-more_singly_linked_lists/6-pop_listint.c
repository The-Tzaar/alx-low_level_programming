#include "lists.h"

/**
 * free_listint2 - Frees a listint_t linked list
 * and sets the head pointer to NULL
 * @head: Double pointer to the head of the list
 **/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}

