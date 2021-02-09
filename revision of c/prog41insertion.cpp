#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void create(struct node **head,int newdata)
{
	struct node *newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data=newdata;
	newnode->next= *head;
	*head=newnode;
}
void insert(struct node **head,int k,int l)
{ struct node *node4=*head,*prev;
struct node *newd=(struct node*)malloc(sizeof(struct node));
	while(l>=1)
	{
		prev=node4;
		node4=node4->next;
		l--;
	}
	newd->data=k;
	newd->next=prev->next;
	prev->next=newd;
	
}
main()
{ struct node *head=NULL,*node2;
	int i=1,n,m,k,l;
	while(i==1)
	{
		printf("enter element\n");
		scanf("%d",&n);
		create(&head,n);
		printf("press 1 for continue\n");
		scanf("%d",&i);
	} node2=head;
	while(node2!=NULL)
	{
		printf("%d\n",node2->data);
		node2=node2->next;
	}
	printf("enter data to be inserted\n");
	scanf("%d",&k);
	printf("enter the no of element after which insertion takes place\n");
	scanf("%d",&l);
	insert(&head,k,l);
	struct node *node3=head;
	while(node3!=NULL)
	{
		printf("%d ",node3->data);
		node3=node3->next;
	}
	
}
