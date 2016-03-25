/*
OVERVIEW: Given a single linked list, reverse the linked list.
E.g.: 1->2->3->4->5, output is 5->4->3->2->1.

INPUTS: A linked list.

OUTPUT: Reverse the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
struct node * reverselnk(struct node *, struct node *);

struct node {
	int num;
	struct node *next;
};

struct node * reverseLinkedList(struct node *head) {
	struct node *prev , *p;
	if (head == NULL )
		return head;
	p =prev= head;
	if (p->next != NULL)
	{
		printf("\n%d", p->num);
		head= reverselnk(prev, p->next);
		prev->next = NULL;
	}
	
	return head;
}
struct node * reverselnk(struct node *prev, struct node *p)
{
	struct node *head;
	if (p->next != NULL)
		head=reverselnk(p, p->next);
	else
	{
		p->next = prev;
		return p;
	}
	p->next = prev;
	return head;

}
