#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) in a linked list
 * @head: points to the head of a linked list
 * Return: returns the sum of all data in the list
 * or 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *temp;

	sum = 0;

	temp = head;
	if (head == NULL)
		return 0;
	while (temp != NULL)
	{
		temp = temp->next;
		sum += temp->n;
	}
	return (sum);
}
