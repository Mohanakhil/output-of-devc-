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
void deleted(struct node **head,int data)
{ struct node *prev=(struct node*)malloc(sizeof(struct node));
	struct node *node2=*head;
	if(node2->next!=NULL||node2->data==data)
	{
		*head=node2->next;
	}
	while(node2->next!=NULL&&node2->data!=data)
	{
	prev=node2;
	node2=node2->next;	
	}
	prev->next=node2->next;
	free(node2);
}
main()
{ struct node *head=NULL;
	int a,b,c,opt;
	do{
		printf("enter element\n");
		scanf("%d",&a);
		create(&head,a);
		printf("press 1 to terminate\n");
		scanf("%d",&opt);
		
	}while(opt!=1);
	struct node *node1=head; printf("\nbefore deletion list is\n");
	while(node1!=NULL)
	{
		printf("%d  ",node1->data);
		node1=node1->next;
	}
	printf("enter element to be deleted\n");
	scanf("%d",&b);
	deleted(&head,b);
	struct node *node3=head;
	printf("after deletion list is\n");
	while(node3!=NULL)
	{
		printf("%d ",node3->data);
		node3=node3->next;
	}
}
