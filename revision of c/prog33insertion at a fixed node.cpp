#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
main()
{ int k,m;
	struct node *f;
	struct node *s;
	struct node *n;
	struct node  *t;
	f= (struct node *)malloc(sizeof(struct node));
	s= (struct node *)malloc(sizeof(struct node));
	n= (struct node *)malloc(sizeof(struct node));
	t= (struct node *)malloc(sizeof(struct node));
	printf("enter ele in first data\n");
	scanf("%d",f->data);m=f->data;
	f->next=s;
	printf("enter second ele in data\n");
	scanf("%d",s->data);
	s->next=t;
	printf("enter third ele in data\n");
	scanf("%d",t->data);
	t->next=NULL;
	printf("enter data of previous and also present data\n");
	scanf("%d %d",&k,n->data);
	while(f!=NULL)
	{
		if(f->data==k)
		{
			n->next=f->next;
			f->next=n;
		}
		f=f->next;
	}
	printf("linked list after insertion at required place is \n");
	printf(" in order is \n %d \n",f->data);
	while(f!=NULL)
	{
		printf("\n %d \n",f->data);
		f=f->next;
	}
	
}
