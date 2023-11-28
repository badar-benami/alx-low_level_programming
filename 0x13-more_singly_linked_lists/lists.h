#ifndef _LISTS_H_
#define _LISTS_H_

#include <stddef.h>

/**
 * struct listint_s --- individual linked list.
 * @n: Integer.
 * @next: indicates the following node.
 *
 * Description: structure of a single linked list node.
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/**
 * struct listnode_s --- individual linked list.
 * @ptr: location of listint_t.
 * @next: indicates the following node.
 *
 * Description: structure of a single linked list node.
 *
 */
typedef struct listnode_s
{
	listint_t *ptr;
	struct listnode_s *next;
} listnode_t;

int _putchar(char c);
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listnode(listnode_t *head);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
listint_t *reverse_listint(listint_t **head);
listnode_t *add_nodeptr(listnode_t **head, const listint_t *ptr);
listint_t *find_listint_loop(listint_t *head);
size_t print_listint_safe(const listint_t *head);
int is_in_nodes(listnode_t *head, const listint_t *ptr);
size_t free_listint_safe(listint_t **h);

#endif /* _LISTS_H_ */