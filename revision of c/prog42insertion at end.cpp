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
void end(struct node **head,int m)
{ 
struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=m;
newnode->next=NULL;
struct node *node1=*head;
while(node1->next!=NULL)
{
	node1=node1->next;

 } 
	 node1->next=newnode;

}
main()
{ struct node *head=NULL,*node1,*node2;
	int i=1,m,n;
	while(i==1)
	{
		printf("enter element\n");
		scanf("%d",&n);
		create(&head,n);
		printf("press 1 to continue\n");
		scanf("%d",&i);
	} node1=head; printf("before insertion at end\n");
	while(node1!=NULL)
	{
	printf("%d\n",node1->data);
	node1=node1->next;	
	}
		printf("enter element to be inserted at last\n");
	scanf("%d",&m);
	end(&head,m);
	printf("after insertion at last is \n\n");
	node2=head;
	while(node2!=NULL)
	{
		printf("%d\n",node2->data);
		node2=node2->next;
	}
	
}
