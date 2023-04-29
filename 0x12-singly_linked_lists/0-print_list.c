#include "lists.h"

/**
  * print_list - prints all elements of a list_t list
  * @h: singly linked list to print
  * Return: number of nodes in the list
  */
size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *copy_head;

	copy_head = h;
	while (copy_head != NULL)
	{
		if (!copy_head->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", copy_head->len, copy_head->str);
		copy_head = copy_head->next;
		count++;
	}
	return (count);
}
