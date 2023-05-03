#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	const listint_t *prev = NULL;
	size_t count = 0;

	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

	if (prev && prev >= current)
	{
		printf("-> [%p] %d\n", (void *)current->next, current->next->n);
		exit(98);
	}

	prev = current;
	current = current->next;
	}

	return (count);
}
