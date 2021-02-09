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
void removedup(struct node *head)
{ struct node *node1=head;
struct node *next;
while(node1->next!=NULL)
{
	if(node1->data==node1->next->data)
	{ next=node1->next->next;
	free(node1->next);
	node1->next=next;
	}
	else{
		node1=node1->next;
	}
}

	
}
main()
{ struct node *head=NULL;
int a,b;
do{
	printf("enter val\n");
	scanf("%d",&a);
	create(&head,a);
	printf("press 2 to end\n");
	scanf("%d",&b);
}while(b!=2);
struct node *node1=head;
while(node1!=NULL)
{ printf("%d \n",node1->data);
node1=node1->next;
	}	
	removedup(head);
	struct node *node2=head;
	while(node2!=NULL)
	{
		printf("\n%d \n\n",node2->data);
		node2=node2->next;
	}
}
