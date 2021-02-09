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
{int a,b,x,y,t;struct node *head=NULL;
do{ printf("enter ele\n");
scanf("%d",&a);
create(&head,a);
printf("press 2 for term\n");
scanf("%d",&b);
}while(b!=2);
do{

struct node *node1=head;
while(node1!=NULL)
{printf("%d ",node1->data);
node1=node1->next;
}
printf("\n enter 2 ele for swapping\n");
scanf("%d %d",&x,&y);node1=head;

node1=head;
while(node1->data!=x)
{ 
node1=node1->next;
}
printf("\n%d \n",node1->data);

struct node *node2=(struct node*)malloc(sizeof(struct node));
node2=head;
while(node2->data!=y)
{
node2=node2->next;
}struct node *temp=(struct node*)malloc(sizeof(struct node));
printf("\n%d \n",node2->data);
t=node1->data;
node1->data=node2->data;
node2->data=t;

node1=head;
while(node1!=NULL)
{printf("%d ",node1->data);
node1=node1->next;
}
printf("press 2 for term\n");
scanf("%d",&b);
}while(b!=2);
}
