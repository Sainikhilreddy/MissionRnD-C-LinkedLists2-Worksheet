 /*
OVERVIEW: Given a single sorted linked list find the median element of the single linked list.
Median is the middle element.
E.g.: 1->2->3->4->5, output is 3.

INPUTS: A sorted linked list.

OUTPUT: Return median of the linked list elements.

ERROR CASES: Return -1 for error cases.

NOTES: If length is even, return average of middle pair of numbers.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

int linkedListMedian(struct node *head) {
	int l = 0, i = 0, m =0;
	struct node *p;
	if (head == NULL)
		return -1;
	p = head;
	while (p != NULL)
	{
		l++;
		p = p->next;
	}
	p = head;
	while (p != NULL)
	{
		i++;
		if (l % 2 == 0)
		{
			if (i == l / 2 || i == (l / 2) + 1)
				m += p->num;
		}
		else if (i == (l / 2) + 1)
			m += p->num;
		p = p->next;
	}
	if (l % 2 == 0)
		return (m / 2);
	else
		return m;
}
