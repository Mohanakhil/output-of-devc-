#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
main()
{
	struct node *newnode;
	struct node *f;
	struct node *s;
	struct node *t;
	newnode= (struct node*)malloc(sizeof(struct node));
	f= (struct node*)malloc(sizeof(struct node));
	s= (struct node*)malloc(sizeof(struct node));
	t= (struct node*)malloc(sizeof(struct node));
	f->data=101;
	f->next=s;
	s->data=102;
	s->next=t;
	t->data=103;
	t->next=NULL;
	newnode->data=100;
	newnode->next=f;
	while(newnode!=NULL)
	{
		printf("%d\n",newnode->data);
		newnode=newnode->next;
	}
}
