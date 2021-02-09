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
void deleted(struct node **head,int c)
{ struct node *node1=*head;
struct node *head2=(struct node*)malloc(sizeof(struct node));
while(node1->next->next!=NULL)
{ if(node1->data!=node1->next->data)
{ head2->data=node1->data;printf("\nins value is %d\n",head2->data);
head2=head2->next;
}
node1=node1->next;
}


}

main()
{ struct node *head=NULL;
int a,b,c; 

printf("enter ele\n");
scanf("%d",&a);c=a;
create(&head,a);

do{
	printf("enter ele\n");
	scanf("%d",&a);
	create(&head,a);
	printf("enter 2 to end\n");
	scanf("%d",&b);
}while(b!=2);
struct node *node1=head;
while(node1!=NULL)
{
	printf("%d ",node1->data);
	node1=node1->next;
} 
deleted(&head,c);

	
}
