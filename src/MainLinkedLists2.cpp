/*

Use MainLinkedLists2 File for testing any other function in other Cpp files of the Strings Project.

DO NOT write main function in any other File or else your Build Fails.

Objectives of LinkedLists2 Lesson:

->Merging two Linked Lists
->Reversing a LinkedList
->Inserting at a specific index 

*/
#include <stdio.h>
#include "FunctionHeadersLinkedLists2.h"
#include<malloc.h>

struct node {
	int num;
	struct node *next;
};

int main(){

	//Test InsertAtEveryKthNode

	//Test LinkedListMedian

	//Test merge2 LinkedLists

	//Test reverse LinkedList
	/*int n = 2, i;
	struct node *p, *prev,*head=NULL;
	for (i = 1; i <= n; i++)
	{
		printf("\n%d", i);
		p = (struct node *)malloc(sizeof(struct node));
		p->num = i;
		if (head == NULL)
		{
			head = p;
			head->next = NULL;
		}
		else
			prev->next = p;
		prev = p;
	}
	p =insertAtEveryKthNode(head,1);
	while (p != NULL)
	{
		printf("\n%d", p->num);
		p = p->next;
	}
	*/
	return 0;
}