#include "lists.h"


size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *copy_head;

	copy_head = h;
	while (copy_head->next != NULL)
	{
		copy_head = copy_head->next;
		count += 2;
	}
	return (count);
}
