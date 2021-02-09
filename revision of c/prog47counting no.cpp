#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
int create(struct node **head,int newdata)
{ 
struct node	*newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=newdata;
newnode->next=*head;
*head=newnode;

}
int count(struct node **head)
{ static int d=0,c=0;
	struct node *node2=*head;
	while(node2!=NULL)
	{
		d=d+1;
		node2=node2->next;
	}
	c=d;
	return c;
}
int search(struct node **head,int b)
{ int d;
	struct node *node2=*head;
	while(node2!=NULL)
	{ 
		if(node2->data==b)
		d=d+1;
		node2=node2->next;
		
	}
	return d;
}
main()
{ struct node *head=NULL;
	int  c=0,a=1,b=0,t=0;
do{
	printf("enter elements\n");
	scanf("%d",&a);
	create(&head,a);
	a=a+count(&head);
	printf("press 2 to terminate\n");
	scanf("%d",&c);
}while(c!=2);
struct node *node1=head;
printf("\nentered data is \n");
while(node1!=NULL)
{
	printf(" %d ",node1->data);
	node1=node1->next;
}
printf("\ncount of ele is %d \n",a);
printf("enter an element to be searched for \n");
scanf("%d",b);
t=search(&head,b);
if(t>=1)
{printf("element is present at %d\n",t);
}
else 
printf("element is not present");
}
