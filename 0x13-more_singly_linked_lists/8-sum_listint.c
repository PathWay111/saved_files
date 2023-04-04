#include <stdlib.h>
#include "lists.h"

/**
 *sum_listint - function that return the sum of all data
 *		of listint lists
 *@head: Pointer to the head of listint
 *Return: return 0 if list is empty else cal the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
