#include "lists.h"

/**
  * list_len - finds the number of nodes in a list
  * @h: singly linked list
  * Return: number of elements in a linked list
  */
size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *copy_head;

	copy_head = h;
	while (copy_head != NULL)
	{
		copy_head = copy_head->next;
		count++;
	}
	return (count);
}
