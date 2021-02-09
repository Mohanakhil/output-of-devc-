#include<stdio.h>
#include<stdlib.h>
struct node
{ int data;
struct node *next;
};
void e(struct node **front,struct node **rear)
{struct node *newnode=(struct node*)malloc(sizeof(struct node));
printf("enter val\n");int newdata=0;
scanf("%d",&newdata);
newnode->data=newdata;
newnode->next=NULL;
if(*front==NULL&&*rear==NULL)
{*front=newnode;
*rear=newnode;
printf("%d is enqueued\n",(*rear)->data);
}
else
{(*rear)->next=newnode;
*rear=newnode;
printf("%d is enqueued\n",(*rear)->data);
}
}
void d(struct node **front,struct node **rear)
{if(*front==NULL&&*rear==NULL) printf("q is underflowing\n");
else 
{struct node *temp=*front;
printf("%d is dequed\n",(*front)->data);
*front=(*front)->next;	
free(temp);
}}
void dis(struct node **front,struct node **rear)
{if(*front==NULL&&*rear==NULL) printf("q is underflowing\n");
else
{ struct node *temp=*front;
while(temp!=NULL)
{ printf("%d ",temp->data);
temp=temp->next;
}
}
}
void peek(struct node  **front,struct node **rear)
{if(*front==0&&*rear==0) printf("underflow\n");
else
{
printf("front ele is %d\n",(*front)->data);
}
}
main()
{int a,b;struct node *front=NULL,*rear=NULL;
do
{printf("1-enqu\n2-dequ\n3-displa\n4-peek\n5-exit\n");
scanf("%d",&a);
switch(a)
{case 1: { e(&front,&rear);	break;
 }
 case 2:
 	{
 		d(&front,&rear);	break;
	 }
case 3:{
	dis(&front,&rear);
	break;
}
case 4:
	{ peek(&front,&rear);	break;
	}
}
}while(a!=5);
}

