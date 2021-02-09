#include<stdio.h>
#include<stdlib.h>
struct node 
{int data;
struct node *next;
};
void e(struct node **f,struct node **r)
{struct node *newnode=(struct node *)malloc(sizeof(struct node));
int newdata;
printf("enter new ele\n");
scanf("%d",&newdata);
newnode->data=newdata;
newnode->next=NULL;
if(*f==NULL&&*r==NULL)
{*f=newnode;
*r=newnode;
printf("%d is inserted into queue\n",(*r)->data);
}
else
{ (*r)->next=newnode;
*r=newnode;
printf("%d is inserted into queue\n",(*r)->data);
}
}
void d(struct node **front,struct node **rear)
{struct node *temp=*front;
if(*front==NULL&&*rear==NULL)
{printf("queue is underflowing\n");}
else 
{printf("%d ele is dequeued\n",(*front)->data);
(*front)=(*front)->next;
free(temp);
}

}
void dis(struct node **front,struct node **rear)
{struct node *temp=*front;
while(temp!=NULL)
{printf("%d \n",(temp)->data);
temp=(temp)->next;
}
}
void peek(struct node **front,struct node **rear)
{printf("%d is the front ele in queue\n",(*front)->data);
}
int main()
{struct node *front=NULL,*rear=NULL;int a,b;

do{	
printf("\nenter 1-for enqueue\n2-for dequeue\n3-for display\n4-for peek\n5- for exit\n");
	scanf("%d",&b);
switch(b)
{case 1: {
e(&front,&rear);
break;}

case 2: { d(&front,&rear);
	break;
}
case 3: { dis(&front,&rear);
	break;
}
case 4: {peek(&front,&rear);
	break;
}
}
}while(b!=5);
}+
