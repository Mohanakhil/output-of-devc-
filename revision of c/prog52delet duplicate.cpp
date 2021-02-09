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
int removedup(struct node **head)
{ 
int i=1; struct node *node2=(struct node*)malloc(sizeof(struct node));
struct node *node1=*head;
struct node *node3=node2;
while(node1!=NULL)
{ if(node1->data!=node1->next->data)
	{
		node3->data=node1->data; printf("\ndata assigt is %d\n",node3->data);
		node3=node3->next;
		node1=node1->next;
	}
	else
	node1=node1->next;
}
printf("after deleting duplicates\n");
struct node *node4=node2;
while(node4!=NULL)
{
	printf("%d  ",node4->data);
	node4=node4->next;
}
return 0;
}
	

main()
{ 
int  a,b,s;
struct node *head=NULL;
do{
	printf("enter ele\n");
	scanf("%d",&a);
	create(&head,a);
	printf("press 2 to terminate\n");
	scanf("%d",&b);
}while(b!=2);
struct node *node1=head;printf("without \n");
while(node1!=NULL)
{
	printf("%d ",node1->data);
	node1=node1->next;
}
s=removedup(&head);

}
