#include "sort.h"

/**
 * swap_nodes - swaps two nodes in a doubly linked list
 * @list: list head
 * @current: pointer to the node to be swapped with the one before it
 */
void swap_nodes(listint_t **list, listint_t *current)
{
	listint_t *node1, *node2;

	node1 = (current->prev)->prev;
	node2 = current->next;
	current->next = current->prev;
	(current->prev)->prev = current;
	current->prev = node1;
	if (node1 == NULL)
		*list = current;
	else
		node1->next = current;
	(current->next)->next = node2;
	if (node2)
		node2->prev = current->next;
}
/**
 * insertion_sort_list - sort by insertion
 * @list: head of doubly linked list
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp, *current;

	if ((!list || !(*list)) || !(*list)->next)
	{
		return;
	}
	tmp = (*list)->next;
	while (tmp)
	{
		current = tmp;
		tmp = tmp->next;
		while ((current->prev) && (current->prev)->n > current->n)
		{
			swap_nodes(list, current);
			print_list(*list);
		}
	}

}
