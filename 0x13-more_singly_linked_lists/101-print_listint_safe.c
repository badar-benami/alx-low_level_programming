#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe-This function prints a listint_t linked list.
 * @head: A pointer to the linked list's head.
 *
 * With a loop, this method can print lists.
 * You should only go over the list once.
 * If the function fails, the program will terminate with status 98.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	listnode_t *nodes = NULL; /* node addresses are saved */
	size_t count = 0;

	/* while you haven't come across a loop */
	while (!is_in_nodes(nodes, head))
	{
		/* check if the malloc fails then exit */
		if (!add_nodeptr(&nodes, head))
		{
			free_listnode(nodes);
			exit(98);
		}
		/* print the current node's address and the value of field n */
		/* To print the address, turn it to a void pointer */
		printf("[%p] %d\n", (void *)head, head->n);
		/* tally the nodes */
		count++;
		head = head->next;
	}
	/* if you come into a loop */
	if (head != NULL)
	/* print the start of the loop */
		printf("-> [%p] %d\n", (void *)head, head->n);
	free_listnode(nodes);
	/* return number of nodes */
	return (count);
}

/**
 * add_nodeptr - adds a new node to the beginning of a listint_t list.
 * @head: pointer to the initial node's pointer.
 * @ptr: the value of the newly created node.
 *
 * Return: the address of the new element, or NULL if it failed
 */
listnode_t *add_nodeptr(listnode_t **head, const listint_t *ptr)
{
	listnode_t *new_node;

	/* create new node */
	new_node = malloc(sizeof(listnode_t));
	/* if malloc fails return NULL */
	if (new_node == NULL)
		return (NULL);
	new_node->ptr = (listint_t *)ptr;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

/**
 * free_listnode - frees a free_listnode list
 * @head: pointer to first node of the list
 */
void free_listnode(listnode_t *head)
{
	if (head == NULL)
		return;
	free_listnode(head->next);
	free(head);
}

/**
 * is_in_nodes-determines if a given address is included in a given list.
 * @head: top node inside the list.
 * @ptr: Address.
 *
 * Return: one if address is in nodes. Otherwise zero.
 */
int is_in_nodes(listnode_t *head, const listint_t *ptr)
{
	/* if we have no address lists return 1 */
	if (ptr == NULL)
		return (1);
	/* traverse the list */
	while (head != NULL)
	{
		/* if the address is in a given list then return 1 */
		if (ptr == head->ptr)
			return (1);
		head = head->next;
	}
	return (0);
}
