#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void create(struct node **head, int newdata)
{
	struct node *newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data= newdata;
	newnode->next= *head;
	*head= newnode;
}
main()
{struct node *head=NULL;
 int i=1,n,m,k;
while(i==1)
{
	printf("enter element\n");
	scanf("%d",&n);
	create(&head,n);
	printf("press 1 to continue\n");
	scanf("%d",&i);
}
struct node *node1=head;
 printf("before adding\n");
while(node1!=NULL)
{
	printf("%d ",node1->data);
	node1=node1->next;
}
printf("enter no to be added\n");
scanf("%d",&m);
printf("after which data to add\n");
scanf("%d",&k);
struct node *node2=head;
printf("%d before entering loop\n",node2->data);
struct node *prev=(struct node*)malloc(sizeof(struct node));
while(node2->next!=NULL&&node2->data!=k)
{ prev=node2;
	
	node2=node2->next;
}
printf("value  after loop is %d\n\n\n\n\n",prev->data);
struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=m;
newnode->next=node2->next;
node2->next=newnode;
struct node *node3;
*node3=*head;
printf("after inseertion \n");
while(node3!=NULL)
{
	printf("%d\n",node3->data);
	node3=node3->next;
}
}
