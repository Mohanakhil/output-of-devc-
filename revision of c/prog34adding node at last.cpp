#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
main()
{

struct node *f;
struct node *s;
struct node *t;
struct node *n;
f= (struct node*)malloc(sizeof(struct node));
s= (struct node *)malloc(sizeof(struct node));
t=(struct node *)malloc(sizeof(struct node));
f->data=100;
f->next=s;
s->data=101;
s->next=t;
t->data=102;
t->next=NULL;
t->next=n;
n->data=103;
n->next=NULL;
while(f!=NULL)
{
	printf("%d\n",f->data);
	f=f->next;
}

}
