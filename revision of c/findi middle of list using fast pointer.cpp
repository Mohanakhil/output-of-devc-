#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void  create(struct node **head,int newdata)
{ struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=newdata;
newnode->next=*head;
*head=newnode;
}
int mid(struct node **head)
{ struct node *slow=*head;
struct node *fast=*head;
if(head!=NULL)
{
	while(fast!=NULL&&fast->next!=NULL)
	{
		fast=fast->next->next;
		slow=slow->next;
	}
	printf("middle of list is %d ",slow->data);
}
}
main()
{ 
int a,b;
do{
struct node *head=NULL;
do{
	printf("enter ele\n");
	scanf("%d",&a);
	create(&head,a);
	printf("press 2 to end\n");
	scanf("%d",&b);
}while(b!=2);
struct node *node1=head;
while(node1!=NULL)
{ printf("%d ",node1->data);
node1=node1->next;	
}
 mid(&head);
	printf("\n press 2 to terminate\n");
	scanf("%d",&b);
} while(b!=2);
	
}
