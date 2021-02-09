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
{ struct node *node1=*head;
int c=0;
	while(node1!=NULL)
	{
		c=c+1;
		node1=node1->next;
	}
	return c;
}
main()
{ struct node *head=NULL;
int a,b,n;
do{

printf("enter element\n");
scanf("%d",&a);
create(&head,a);
printf("press 2 for termination\n");
scanf("%d",&b);
}while(b!=2);
printf("linked list is\n");
struct node *node1=head;
while(node1!=NULL)
{
	printf("%d ",node1->data);
	node1=node1->next;
}
printf("total count of elements in list is %d ",count(&head));
}
