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
main()
{ int n,m=1,k,l;
	struct node *head=NULL;
	do
	{
		printf("enter elements\n");
		scanf("%d",&n);
		create(&head,n);
		printf("press 1 for continue\n");
		scanf("%d",&m);
	}while(m==1);
	struct node *node=head,*node1=head,*node2=head,*prev;
	while(node!=0)
	{
		printf("%d\n",node->data);
		node=node->next;
	}
	printf("enter element to be inserted\n");
	scanf("%d",&k);
	printf("enter position after which element to be inserted\n");
	scanf("%d",&l);
	while(l>=1)
	{
	prev=node1;
	node1=node1->next;
	l=l-1;
	
}
printf("value in prev is %d\n",prev->data);
struct node *newnode= (struct node*)malloc(sizeof(struct node));
newnode->data=k;
newnode->next=prev->next;
prev->next=newnode;
while(node2!=NULL)
{
	printf("%d\n",node2->data);
	node2=node2->next;
}
}

