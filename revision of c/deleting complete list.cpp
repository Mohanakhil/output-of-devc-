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
{ struct node *node1=*head;
struct node *next;
while(node1!=NULL)
{
	next=node1->next;
	free(node1);
	node1=next;
	
}
*head=NULL;
}
main()
{ struct node *head=NULL;
	int a,b;
do{
	printf("enter ele\n");
	scanf("%d",&a);
	create(&head,a);
	printf("press 2 to terminate\n");
	scanf("%d",&b);
}while(b!=2);
struct node *node1=head;
printf("before deleting\n");
while(node1!=NULL)
{
	printf("%d ",node1->data);
	node1=node1->next;
}
printf("now deleting\n");
 deleted(&head);
printf("linked list deleted\n");
struct node *node2=head;
while(node2!=NULL)
{
printf(" list is %d",node2->data);
node2=node2->next;
}}
