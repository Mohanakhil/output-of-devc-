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
void deleted(struct node**head,int i)
{ struct node *prev=(struct node*)malloc(sizeof(struct node));
struct node *node1=*head;
if(i==1&&node1->next!=NULL)
	{ *head=node1->next;
	}
while(i>1&&node1->next!=NULL)
{ prev=node1;
node1=node1->next;
i--;		
}
prev->next=node1->next;

}
main()
{ struct node *head=NULL;
int n,a,b;
do{
	printf("enter ele\n");
	scanf("%d",&a);
	create(&head,a);
	printf("press 2 to stop\n");
	scanf("%d",&b);
}while(b!=2);
struct node *node1=head;printf("before deltetion\n");
while(node1!=NULL)
{
	printf("%d ",node1->data);
	node1=node1->next;
}
do{

printf("enter node no to be delted\n");
scanf("%d",&n);
deleted(&head,n);
struct node *node2=head; printf("after deletion\n");
while(node2!=NULL)
{
	printf("%d ",node2->data);
	node2=node2->next;
	}	
	printf("press 2 to end\n");
	scanf("%d",&b);
}while(b!=2);
}
