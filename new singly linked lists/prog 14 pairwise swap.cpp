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
{int a,b,t,c=0;struct node *head=NULL;
do{printf("enter ele\n");
scanf("%d",&a);
create(&head,a);
printf("press 2 for term\n");
scanf("%d",&b);
}while(b!=2);
struct node *node1=head;
while(node1!=NULL)
{printf("%d ",node1->data);
node1=node1->next;c++;
}
node1=head;printf("after swapping 2 ele each\n");
if(c%2==0)
{
while(node1->next->next!=NULL)
{t=node1->data;
node1->data=node1->next->data;
node1->next->data=t;
node1=node1->next->next;
}
}
else{
	while(node1->next->next->next!=NULL)
	{t=node1->data;
	node1->data=node1->next->data;
	node1->next->data=t;
	node1=node1->next->next;
	}
}
if(node1->next!=NULL)
{t=node1->data;
node1->data=node1->next->data;
node1->next->data=t;
}
node1=head;
while(node1!=NULL)
{printf("%d ",node1->data);
node1=node1->next;
}
}
