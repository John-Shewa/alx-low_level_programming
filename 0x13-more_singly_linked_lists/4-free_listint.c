#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: a pointer to the head of listint_t list
 * that needs to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
