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
void even(struct node **headeven,int newdata)
{struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=newdata;
newnode->next=*headeven;
*headeven=newnode;
}
void odd(struct node **headodd,int newdata)
{struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=newdata;
newnode->next=*headodd;
*headodd=newnode;
}
void seg(struct node **headall,int newdata)
{struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=newdata;
newnode->next=*headall;
*headall=newnode;
}
main()
{int a,b,t;struct node *head=NULL,*headeven=NULL,*headodd=NULL;
do{printf("enter ele\n");
scanf("%d",&a);
create(&head,a);
printf("press 2 for term\n");
scanf("%d",&b);
}while(b!=2);
struct node *node1=head;
while(node1!=NULL)
{printf("%d ",node1->data);
node1=node1->next;
}
node1=head;
while(node1!=NULL)
{t=node1->data;
if(t%2==0) 
{even(&headeven,t);
}
if(t%2!=0)
{odd(&headodd,t);
}
node1=node1->next;
}
node1=headeven;printf("even nos are\n");
while(node1!=NULL)
{printf("%d ",node1->data);
node1=node1->next;
}
node1=headodd;printf("\n odd nos are\n");
while(node1!=NULL)
{printf("%d ",node1->data);
node1=node1->next;
}
node1=headeven;struct node *node2=headodd,*headall=NULL;
while(node2!=NULL)
{if(node2->data>0)
{b=node2->data;seg(&headall,b);
}
node2=node2->next;
}


while(node1!=NULL)
{ if(node1->data>0)
{ a=node1->data;seg(&headall,a);
}

node1=node1->next;

}

node1=headall;printf("\n hello after bring even nos to front\n");
while(node1!=NULL)
{printf("%d ",node1->data);
node1=node1->next;
}
}
