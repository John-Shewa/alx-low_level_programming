#include "lists.h"
/**
 * pop_listint - deletes the head of listint_t list
 * @head: a pointer to the address of listint_t list header
 * Return: 0 if list is empty
 * otherwise the head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
