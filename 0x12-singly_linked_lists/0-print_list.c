#include "lists.h"

/**
  * print_list - prints all elements of a list_t list
  * @h: singly linked list to print
  * Return: number of nodes in the list
  */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%u] %s", h->len, h->str);
		h = h->next;
		count++;
		printf("\n");
	}
	return (count);
}
