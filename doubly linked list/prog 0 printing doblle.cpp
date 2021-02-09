#include<stdio.h>
#include<stdlib.h>
struct node
{int data;
struct node *prev;
struct node *next;
};
void create(struct node **head,int newdata)
{struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=newdata;
newnode->next=(*head);
newnode->prev=NULL;
if((*head)!=NULL)
{(*head)->prev=newnode;
}
(*head)=newnode;
}
main()
{int a,b;struct node *head=NULL;
do{
	printf("enter ele\n");
	scanf("%d",&a);
	create(&head,a);
	printf("press 2 for term\n");
	scanf("%d",&b);
}while(b!=2);
struct node *node1=head;
while(node1->next!=NULL)
{printf("%d ",node1->data);
node1=node1->next;
}
printf("%d ",node1->data);
printf("\n reverse is\n ");
while(node1!=NULL)
{printf("%d ",node1->data);
node1=node1->prev;
}
printf("\nenter index of node after which newnode will be inserted\n");scanf("%d",&a);
node1=head;



}
