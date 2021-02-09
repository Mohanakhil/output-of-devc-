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
	newnode->next= *head;
	*head=newnode;
}
main()
{ int n,m=1;
	struct node *head=NULL;
	do
	{
		printf("enter data\n ");
		scanf("%d",&n);
		create(&head,n);
		printf("press 1 to continue\n");
		scanf("%d",&m);
	}while(m==1);
	
	while(head!=NULL)
	{
		printf("%d ",head->data);
		head=head->next;
	}
	
}
