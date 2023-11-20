#ifndef _LISTS_H_
#define _LISTS_H_

/**
 * struct list_s --- a list that is only connected once.
 * @str: string - (malloc'd text).
 * @len: the string's length.
 * @next: indicates the following node.
 *
 * Description: structure of a single linked list node.
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
void free_list(list_t *head);
void before_main() __attribute__((constructor));
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);

#endif
