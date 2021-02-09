#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void create(struct node**head,int newdata)
{ struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=newdata;
newnode->next=*head;
*head=newnode;	
}
void insert(struct node **head,int i,int newdata)
{ struct node *newnode=(struct node*)malloc(sizeof(struct node));
struct node *node1=*head;

while(i>1&&node1->next!=NULL)
{
	node1=node1->next;
	i--;
}
printf("value of present is %d\n",node1->data);
newnode->data=newdata;
newnode->next=node1->next;
node1->next=newnode;
}
main()
{ struct node *head=NULL;
int a,b,i,n;
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
do
{
	printf("enter eleme to insert at front\n");
	scanf("%d",&n);
	create(&head,n);

	struct node *node3=head;
while(node3!=NULL)
{
	printf("%d ",node3->data);
	node3=node3->next;
	
}	printf("press 2 to terminate\n");
	scanf("%d",&b);
}while(b!=2);

do{
printf("enter newdata\n");
scanf("%d",&n);
printf("enter no of node after which insertion is done\n");
scanf("%d",&i);
insert(&head,i,n);
struct node *node2=head;
while(node2!=NULL)
{
	printf("%d ",node2->data);
	node2=node2->next;
}
printf("press 2 to terminate\n");
scanf("%d",&b);
}while(b!=2);
}
