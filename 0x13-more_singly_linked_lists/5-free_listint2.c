#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that frees a singly linked list.
 * @head: pointer to pointer to the head of linked list.
 *
 * Return: No return.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp_variable;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp_variable =  *head;
		*head = (*head)->next;
		free(temp_variable);
	}
}
