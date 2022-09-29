#include "lists.h"

/**
 * dlistint_len: Return the number of elements in a linked list
 * @h: Pointer to the list
 * Return: Number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{

	const dlistint_t *node = h;
	size_t count = 0;

	while (node)
	{
	
		count++;
		node = node->next;
	}

	return (count);
}
