#include "monty.h"


void add(stack_t **head, unsigned line_number)
{
	if (*head == NULL) || ((*head)->next == NULL)

	{
	fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}


int result  = (*head)->n + (*head)->next->n;
		pop(head);
		pop(head);

		push(head ,result);
}
