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
{int a,b;struct node *head=NULL;

do{
	printf("enter ele\n");
	scanf("%d",&a);
	create(&head,a);
	printf("press 2 for term\n");
	scanf("%d",&b);
}while(b!=2);printf("entered ele are\n");

struct node *node1=head;
while(node1!=NULL)
{printf("%d ",node1->data);
node1=node1->next;
}do{
printf("enter index after which you want to enter\n");
scanf("%d",&a);
printf("enter new ele to insert any where except starting\n");
scanf("%d",&b);
node1=head;
while(a>0&&node1!=NULL)
{node1=node1->next;
a--;
} 
struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=b;
newnode->next=node1->next;
node1->next=newnode;
node1=head;printf("after insertion\n");
while(node1!=NULL)
{printf("%d ",node1->data);
node1=node1->next;
}printf("press 2 for term\n");
scanf("%d",&b);
}while(b!=2);
do{
printf("enter ele after which you want to enter\n");
scanf("%d",&a);
printf("enter new ele\n");
scanf("%d",&b);
node1=head;
while(node1!=NULL&&node1->data!=a)
{node1=node1->next;
}
printf("at now node1->data=%d\n",node1->data);
if(node1->data!=a) {
printf("ele doesnot exist\n");break;}

if(node1->data==a)
{
struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=b;
newnode->next=node1->next;
node1->next=newnode;
node1=head;
while(node1!=NULL)
{printf("%d ",node1->data);
node1=node1->next;
}
printf("press 2 for term\n");
scanf("%d",&b);
}
}while(b!=2);
}
