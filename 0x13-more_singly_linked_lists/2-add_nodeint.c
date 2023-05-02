#include "lists.h"

/**
  * add_nodeint - add new nodes to the list
  * @head: current place in the list
  * @n: int to add to the list
  * Return: pointer to current position in list
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head;

	new_head = *head;
	new_head = malloc(sizeof(listint_t));
	if (!new_head)
		return (NULL);

	new_head->next = *head;
	new_head->n = n;
	*head = new_head;

	return (*head);
}
