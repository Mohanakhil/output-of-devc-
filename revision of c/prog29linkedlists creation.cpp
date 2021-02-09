#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
main()
{
	struct node *head;
	struct node *second;
	struct node *third;
	head= (struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
	third=(struct node*)malloc(sizeof(struct node));
	head->data=1;
	head->next=second;
	second->data=2;
	second->next=third;
	third->data=3;
	
	printf("3 data values of nodes are %d %d %d\n",head->data,second->data,third->data);
	printf("addresses of 3 nodes are %p %p %p\n",head->next,second->next,third->next);
}

