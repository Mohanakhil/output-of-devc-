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
void deleted(struct node **head,int n)
{ struct node *prev=(struct node*)malloc(sizeof(struct node));
struct node *node1=*head;
if(node1->next!=NULL&&node1->data==n)
{
	*head=node1->next;
}
while(node1->next!=NULL&&node1->data!=n)
	{
		prev=node1;
		node1=node1->next;
	}
	printf(" prev and pres are %d %d\n",prev->data,node1->data);
	prev->next=node1->next;
}
main()
{ struct node *head=NULL;
int a=0,b=0,n=0,i=0;
do{
printf("enter element\n");
scanf("%d",&a);
create(&head,a);
printf("press 2 to terminate\n");
scanf("%d",&b);
}while(b!=2);
struct node *node1=head;
while(node1!=NULL)
{
	printf("%d ",node1->data);
	node1=node1->next;
}
do{

printf("\nenter value of data to be deleted in list\n ");
scanf("%d",&n);
deleted(&head,n);
struct node *node2=head;
while(node2!=NULL)
{
	printf("%d ",node2->data);
	node2=node2->next;
}printf("\npress 2 for end\n");
scanf("%d",&b);
}while(b!=2);
}
