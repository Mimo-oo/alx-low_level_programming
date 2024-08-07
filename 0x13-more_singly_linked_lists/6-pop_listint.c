#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function that deletes the head node of a listint_t,
 * linked list.
 * @head: pointer to pointer to the head of linked list.
 *
 * Return:  and returns the head node’s data (n) or 0 if list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp_variable;
	int data = 0;

	if (head == NULL || *head == NULL)
		return (0);
	temp_variable = *head;

	data = temp_variable->n;

	*head = (*head)->next;

	free(temp_variable);
	return (data);
}
