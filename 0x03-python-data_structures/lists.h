#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s: singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: Singly linked list node structure for Holberton Project
 */

typedef struct lintint_s
{

	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint_en(listint_t **head, const int n);
void free_listint(listint_t **head);

int is_palindrome(listint_t **head);
