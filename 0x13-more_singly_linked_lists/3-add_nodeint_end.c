#include "lists.h"

/**
  * add_nodeint_end - add new nodes to the end of the list
  * @head: current place in the list
  * @n: int to add to the list
  * Return: pointer to current position in list
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_head, *current;

	new_head = malloc(sizeof(listint_t));
	if (new_head == NULL)
		return (NULL);
	new_head->n = n;
	new_head->next = NULL;

	if (*head == NULL)
	{
		*head = new_head;
		return (*head);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = new_head;
	return (*head);
}
