#include "lists.h"

/**
  * print_listint - prints all elements of a list_t list
  * @h: singly linked list to print
  * Return: number of nodes in the list
  */
size_t print_listint(const listint_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
