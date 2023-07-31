#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * struct list_s - Singly Linked List
 *
 * @str: string (malloc'd)
 * @len: length of the string
 * @next: pointer to next node
 *
 * description: Singly Linked List structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
