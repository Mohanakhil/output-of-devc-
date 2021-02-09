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
int getn(struct node **head,int  k)
{ k--;
	struct node *node1=*head;
	while(node1!=NULL&&k>0)
	{
		node1=node1->next;
		k--;
	}
	printf("value is %d \n",node1->data);
	return node1->data;
}
main()
{ struct node *head=NULL;
int a,b,k;
do{
	printf("enter ele\n");
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
do{

printf("enter the index no\n");
scanf("%d",&k);
printf("value at index %d is %d\n",k,getn(&head,k));	
printf("press 2 for end\n");
scanf("%d",&b);
}while(b!=2);
}
