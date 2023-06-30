#ifndef LISTS_H
#define LISTS_H

typedef struct node
{
	char *str;
	int len;
	struct node *next;
}list_t;

int _putchar(int c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif
