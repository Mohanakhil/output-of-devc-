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
void insert(struct node **head,int i,int newdata)
{ struct node *newnode=(struct node*)malloc(sizeof(struct node));
struct node *node2=*head;
while(node2->next!=NULL&&node2->data!=i)
{
	node2=node2->next;
}
printf("value of present is %d\n",node2->data);
newnode->data=newdata;
newnode->next=node2->next;
node2->next=newnode;
	
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
struct node *node1=head;printf("\nentered list is \n");
while(node1!=NULL)
{
	printf("%d ",node1->data);
	node1=node1->next;
}
do{

printf("\nenter no to add at front");
scanf("%d",&a);
create(&head,a);
printf("after entering at front\n");
struct node *node2=head;
while(node2!=NULL)
{
	printf("%d ",node2->data);
	node2=node2->next;
}
printf("\n press 2 to terminate\n");
scanf("%d",&b);
}while(b!=2);
do{
printf("enter new data\n");
scanf("%d",&n);
printf("enter after which data to enter\n");
scanf("%d",&i);
insert(&head,i,n);
struct node *node3=head;
printf("after entering in middle\n");
while(node3!=NULL)
{
	printf("%d  ",node3->data);
	node3=node3->next;

}
	printf("\n press 2 to terminate\n");
	scanf("%d",&b);
}while(b!=2);
}
