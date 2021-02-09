#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void create(struct node **,int);
void printll(struct node *);
void insertafter(struct node *prevnode,int);
main()
{
	struct node *head=NULL;
	create(&head,1);
	create(&head,2);
	create(&head,3);
	printll(head);
}
void create(struct node **headref,int newd)
{
	struct node *newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=newd;
	newnode->next=*headref;
	*headref=newnode;
}
void printll(struct node *n)
{
	while(n!=NULL)
	{
		printf("%d\n",n->data);
		n=n->next;
	}
}

