#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void create(struct node **head,int newdata)
{
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=newdata;
	newnode->next=*head;
	*head=newnode;
}
main()
{ struct node *head=NULL;
	int i,m,n,opt=1;
	while(opt==1)
	{
	printf("enter an element\n");
	scanf("%d",&m);
	create(&head,m);
	printf("enter option\n");
	scanf("%d",&opt);	
}
struct node *node1=head;
	while(node1!=NULL)
	{
		printf("%d  ",node1->data);
		node1=node1->next;
	}
	printf("\nenter element to be inserted\n");
	scanf("%d",&i);
	printf("enter after which no to insert\n");
	scanf("%d",&n);
	struct node *node2=head;
	struct node *prev=(struct node*)malloc(sizeof(struct node));
	while(node2->next!=NULL&&node2->data!=n)
	{ prev=node2;
		node2=node2->next;
	}
	printf("after loop value of prev and actual is %d  %d\n",prev->data,node2->data);
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=i;
	newnode->next=node2->next;
	node2->next=newnode;
	struct node *node3=head;
	printf("after inserting  \n");
	while(node3!=NULL)
	{
		printf("%d  ",node3->data);
		node3=node3->next;
	}
	
}
