#include <math.h>
#include "search_algos.h"

/**
 * get_n_next - Will get nth node next to given node.
 * @node: Starting node.
 * @n: Num of positions next to node.
 *
 * Return: Node & places next to it else last Node/NULL.
 */

listint_t *get_n_next(listint_t *node, size_t n)
{
	size_t i = 0;
	listint_t *res = NULL;

	res = node;
	for (i = 0; (i < n) && (res) && (res->next); i++)
		res = res->next;
	return (res);
}

/**
 * jump_list - Searches for value in a sorted linked list(jump search).
 * @list: The linked list in question.
 * @size: The linked list length.
 * @value: What to search for.
 *
 * Return: Node with value in the linked list, else NULL.
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, a = 0, b = 0;
	listint_t *node, *next;

	if (!list)
		return (NULL);
	step = (size_t)sqrt(size);
	node = list;
	next = get_n_next(node, step);
	while (node)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)next->index, next->n);
		if ((next->n >= value) || (!next->next))
			break;
		node = next;
		next = get_n_next(node, step);
	}
	a = node->index;
	b = next->index;
	printf("Value found between indexes [%d] and [%d]\n", (int)a, (int)b);
	while (node)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)node->index, node->n);
		if (node->n == value)
			return (node);
		node = node->next;
	}
	return (NULL);
}
