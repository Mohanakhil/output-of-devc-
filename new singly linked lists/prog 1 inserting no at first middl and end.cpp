#include<stdio.h>
#include<stdlib.h>
struct node
{int data;
struct node *next;
};
void create(struct node **head,int newdata)
{struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=newdata;
newnode->next=*head;
*head=newnode;
}
main()
{int a,b;
struct node *head=NULL;
do{
	printf("enter an ele\n");
	scanf("%d",&a);
	create(&head,a);
	printf("press 2 for term\n");
	scanf("%d",&b);
}while(b!=2);
struct node *node1=head;printf("linked list is \n");
while(node1!=NULL)
{printf(" %d ",node1->data);
node1=node1->next;
}
struct node *node2=head;
struct node *newnode=(struct node*)malloc(sizeof(struct node));
printf("enter new ele\n");
scanf("%d",&a);
printf("enter index after which new ele to be inserted\n");
scanf("%d",&b);int i=0;
while(i<b&&node2->next!=NULL)
{ 
node2=node2->next;
i++;
}
printf("\nval of node2=%d\n",node2->data);	
newnode->data=a;
newnode->next=node2->next;
node2->next=newnode;
struct node *node3= head;printf("after inserting at %d position\n",b+1);
while(node3!=NULL)
{printf("%d ",node3->data);
node3=node3->next;
}
}
