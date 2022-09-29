#include "lists.h"
/**
 * print_dlistint: a function that prints the number of node
 * @h: a pointer points toa list
 * Return:  Number of node
 **/

size_t print_dlistint(const dlistint_t *h)
{

	const dlistint_t *node = h;
	size_t count = 0;

	while (node)
	{
	 
		printf("%i\n", node->n);
		count++;
		node = node->next;
	}

	return (count);
}

