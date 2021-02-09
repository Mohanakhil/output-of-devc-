#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
void create(struct node **head,int newdata)
{struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=newdata;
newnode->next=*head;
*head=newnode;
}
main()
{ struct node *head=NULL;
int a,b;
do{
	printf("enter ele\n");
	scanf("%d",&a);
	create(&head,a);
	printf("press 2 for term\n");
	scanf("%d",&b);
}while(b!=2);
printf("given list is \n");
struct node *node1=head;
while(node1!=NULL)
{printf("%d ",node1->data);
node1=node1->next;
}
struct node *node2=head;

while(node2->next!=NULL)
{struct node *prev=(struct node *)malloc(sizeof(struct node));
struct node *newnode=(struct node *)malloc(sizeof(struct node));
prev=node2;node2=node2->next;
if(node2->data%2==0)
{newnode->data=node2->data;
newnode->next=prev;

prev->next=node2->next;
}node2=node2->next;
} printf("after bringing even to front\n");
struct node *node3=head;
while(node3!=NULL)
{printf("%d ",node3->data);
node3=node3->next;
}
}
