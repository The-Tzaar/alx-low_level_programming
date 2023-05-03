#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given position
 * @head: pointer to pointer to the head of the list
 * @index: index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int i;

	if (!head || !(*head))
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	prev = *head;
	for (i = 0; i < index - 1 && prev; i++)
		prev = prev->next;

	if (!prev || !prev->next)
		return (-1);

	temp = prev->next;
	prev->next = temp->next;
	free(temp);

	return (1);
}
