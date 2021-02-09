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
newnode->next=*head;
newnode->prev=NULL;
if(*head!=NULL)
{(*head)->prev=newnode;
}
*head=newnode;
}
main()
{int a,b;struct node *head=NULL;
do{
	printf("enter ele\n");
	scanf("%d",&a);
	create(&head,a);
	printf("press 2 for term\n");
	scanf("%d",&b);
}while(b!=2);struct node *node1=head;
while(node1->next!=NULL)
{printf("%d ",node1->data);
node1=node1->next;
}printf("%d ",node1->data);
printf("reverse is \n");
while(node1!=NULL)
{printf("%d ",node1->data);
node1=node1->prev;
}
do{

printf("enter index\n");
scanf("%d",&a);node1=head;
printf("enter data\n");
scanf("%d",&b);
while(a>0)
{node1=node1->next;
a--;
}

printf("i am at node1= %d\n",node1->data);
struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=b;
newnode->next=node1->next;
node1->next=newnode;
newnode->prev=node1;
if(newnode->next!=NULL)
{newnode->next->prev=newnode;
}


node1=head;

while(node1->next!=NULL)
{printf("%d ",node1->data);
node1=node1->next;
}printf("%d ",node1->data);
printf("reverse is \n");
while(node1!=NULL)
{printf("%d ",node1->data);
node1=node1->prev;
}
	printf("press 2 for term\n");
	scanf("%d",&b);
}while(b!=2);
do{

printf("enter index before which node will be inserted\n");
scanf("%d",&a);node1=head;
while(a>0)
{node1=node1->next;
a--;
}printf("enter newdata\n");
scanf("%d",&b);
printf("node1=%d\n",node1->data);
struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=b;
node1->prev->next=newnode;
newnode->next=node1;
newnode->prev=node1->prev;
node1->prev=newnode;

node1=head;

while(node1->next!=NULL)
{printf("%d ",node1->data);
node1=node1->next;
}printf("%d ",node1->data);
printf("reverse is \n");
while(node1!=NULL)
{printf("%d ",node1->data);
node1=node1->prev;
}


	printf("press 2 for term\n");
	scanf("%d",&b);

}while(b!=2);
}
