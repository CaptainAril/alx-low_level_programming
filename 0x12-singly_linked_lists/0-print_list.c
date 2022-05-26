#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - Function that prints all the elements of a list_t list
 * @h - points to the head of a singly linked list
 * Return: Returns the number of nodes
 * If str is NULL, print [0] (nil)
 */

size_t print_list(const list_t *h)
{
	size_t count;
	count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
	       	h = h->next;
       		count++;
	}

	return (count);
}
