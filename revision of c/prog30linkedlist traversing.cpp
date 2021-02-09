#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void print(struct node *);
main()
{
	struct node *head;
	struct node *sec;
	struct node *third;
	head =(struct node*)malloc(sizeof(struct node));
	sec= (struct node*)malloc(sizeof(struct node));
	third=(struct node*)malloc(sizeof(struct node));
	head->data=100;
	head->next=sec;
	sec->data=200;
	sec->next=third;
	third->data=300;
	third->next=NULL;
	print(head);
	printf("\n 3 element is %d",third->data);
}
void print(struct node *p)
{
	while(p!=NULL)
	{
		printf("%d\n",p->data);
		p=p->next;
	}
	
}
