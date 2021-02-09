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
{int a,b,s;
do{
struct node *head=NULL;
printf("1-for adding at front\n2-for adding after given ele\n3-for adding before given ele\n");
scanf("%d",&s);
switch(s)
{
case 1:
do{
	printf("enter ele\n");
	scanf("%d",&a);
	create(&head,a);
	printf("press 2 for term\n");
	scanf("%d",&b);
}while(b!=2);break;
case 2:

do{
struct node *node1=head;
while(node1->next!=NULL)
{printf("%d ",node1->data);
node1=node1->next;
}printf("%d ",node1->data);printf("\nwhile reverse traversing\n");
while(node1!=NULL)
{printf("%d ",node1->data);
node1=node1->prev;
}
printf("\nenter index after which newnode will be entered\n");
scanf("%d",&a);
printf("\n enter value to add\n");
scanf("%d",&b);
node1=head;
while(a>0)
{a--;
node1=node1->next;
}
printf("node1=%d ",node1->data);
struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=b;
if(node1->next!=NULL)
{newnode->next=node1->next;
newnode->prev=node1;
node1->next->prev=newnode;
node1->next=newnode;
}
else{
	node1->next=newnode;
	newnode->prev=node1;
	newnode->next=NULL;
}

node1=head;printf("\nafter inserting\n");
while(node1->next!=NULL)
{printf("%d ",node1->data);
node1=node1->next;
}printf("%d ",node1->data);printf("\nwhile reverse traversing\n");
while(node1!=NULL)
{printf("%d ",node1->data);
node1=node1->prev;
}

printf("press 2 for term\n");
	scanf("%d",&b);
}while(b!=2);
break;
case 3:
	do{
	
printf("enter index before which  ele will be added\n");
scanf("%d",&a);
printf("enter value \n");
scanf("%d",&b);node1=head;
while(a>0)
{a--;
node1=node1->next;
}


printf("press 2 for term\n");
	scanf("%d",&b);
}while(b!=2);
break;
printf("press 2 for term\n");
	scanf("%d",&b);
}while(b!=2);
}

