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
void after(struct node *prev,int l)
{ struct node *newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=l;
	newnode->next=*head->next;printf("newnode element is %d ",newnode->data);
 head->next=newnode;
	
}
main()
{ struct node *head=NULL;
	int n,m,k,l;
	do{
		printf("enter element\n");
		scanf("%d",&n);
		create(&head,n);
		printf("press 1 for continue\n");
		scanf("%d",&m); 
	}while(m==1);
	while(head!=NULL)
	{
		printf("%d ",head->data);
		head=head->next;
	}
	
	printf("enter data of element after which element will be inserted\n");
	scanf("%d",&k);
	printf("enter no to be inserted");
	scanf("%d",&l);

	
	after(head,l);
		while(head!=NULL)
	{
		printf("%d ",head->data);
		head=head->next;
	}
	
}
