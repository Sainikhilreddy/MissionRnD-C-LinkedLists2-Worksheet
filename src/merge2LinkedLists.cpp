/*
OVERVIEW: Merge two sorted linked lists.
E.g.: 1->3->5 and 2->4, output is 1->2->3->4->5.

INPUTS: Two sorted linked lists.

OUTPUT: Return merged sorted linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include<malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * merge2LinkedLists(struct node *head1, struct node *head2) {
	struct node *p, *q,*prev=NULL;
	if (head1 == NULL)
		return head2;
	if (head2 == NULL)
		return head1;
	p = head1;
	q = head2;
	while (p!=NULL&&q!=NULL)
	{
		
		if (p->num <= q->num)
		{
			if (prev == NULL)
				head1 = p;
			else
				prev->next = p;
			prev = p;
			p = p->next;
		}
		else if (q->num < p->num)
		{
			if (prev == NULL)
				head1 = q;
			else
				prev->next = q;
			prev = q;
			q = q->next;
		}
	}
	if (p==NULL)
		while (q != NULL)
		{
			prev->next = q;
			prev = q;
			q = q->next;
		}
	else
		while (p!= NULL)
		{
			prev->next = p;
			prev = p;
			p = p->next;
		}
	return head1;
}
