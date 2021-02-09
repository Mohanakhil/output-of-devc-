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
	struct node *sh;
	struct node *t;
	f= (struct node *)malloc(sizeof (struct node));
	s= (struct node *)malloc(sizeof(struct node));
	sh=(struct node *)malloc(sizeof(struct node));
	t=(struct node *)malloc(sizeof(struct node));
	f->data=1001;
	f->next=s;
	s->data=1002;
	s->next=t;
	t->data=1004;
	t->next=NULL;
	sh->data=1003;
	sh->next=s->next;
	s->next=sh;
	while(f!=NULL)
	{
		printf("%d ",f->data);
		f=f->next;
	}
}
