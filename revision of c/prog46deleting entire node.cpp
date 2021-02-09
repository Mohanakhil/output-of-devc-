#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void create(struct node **head,int newdata)
{ struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=newdata;
newnode->next=*head;
*head=newnode;
}
void deleted(struct node **head)
{
struct node *node2=*head;
while(node2!=NULL)
{
	*head=node2->next;
	node2=node2->next;
}
}
main()
{ struct node *head=NULL;
int a,b,opt=3;
do
{
	printf("enter element\n");
	scanf("%d",&a);
	create(&head,a);
	printf("press 3 to off\n");
	scanf("%d",&opt);
}while(opt!=3);
struct node *node1=head;
while(node1!=NULL)
{
	printf("%d ",node1->data);
	node1=node1->next;
}
deleted(&head);

	printf("\nnode is deleted %d",head->data);
}
