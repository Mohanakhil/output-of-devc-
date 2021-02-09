#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}; void insert(struct node*, int);
main()
{
	struct node *f;
	struct node *s;
	struct node *t;
	f=(struct node*)malloc(sizeof(struct node));
	s=(struct node*)malloc(sizeof(struct node));
	t=(struct node*)malloc(sizeof(struct node));
	f->data=100;
	f->next=s;
	s->data=200;
	s->next=t;
	t->data=400;
	t->next=NULL;

	insert(s,300);
	while(f!=NULL)
{
	printf("%d\n",f->data);
	f=f->next;
}
}
void insert(struct node *prevnode,int newdata)
{
struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=newdata;
newnode->next=prevnode->next;
prevnode->next=newnode;

}
