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
int count(struct node **head)
{ int c=0;
struct node *node1=*head;
while(node1!=NULL)
{
	c=c+1;
	node1=node1->next;
	
}
return c;
	
}
main()
{ struct node *head=NULL;
int a,b,c=0;
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
printf("\ncount of ele in list is %d\n",count(&head));	
}
