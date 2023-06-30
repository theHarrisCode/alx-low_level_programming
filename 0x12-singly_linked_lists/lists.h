#ifndef LISTS_H
#define LISTS_H

typedef struct node
{
	char *str;
	int len;
	struct node *next;
}list_t;

size_t print_list(const list_t *h);

#endif
