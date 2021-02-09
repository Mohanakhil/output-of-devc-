#include<stdio.h>
#include<stdlib.h>
void enqueue(int q[],int *front,int *rear,int *u)
{int t,e;
if(*rear==(*u-1))
{printf("upper limit reached\n");
}
else if(*front==-1&&*rear==-1)
{*rear=0;*front=0;
t=*rear;
printf("enter ele\n");
scanf("%d",&e);
q[t]=e;
printf("ele %d is entered\n",q[t]);
}
else
{(*rear)++;
t=*rear;
printf("enter ele\n");
scanf("%d",&e);
q[t]=e;
printf("ele %d is entered\n",q[t]);
}	
}
void dequeue(int q[],int *front,int *rear)
{
if(*front==-1&&*rear==-1)
{printf("queue is empty\n");
}
else if(*front==*rear)
{
*front=*rear=-1;
}
else 
{int t=*front;
(*front)++;

}
}
void peek(int q[],int *front,int *rear)
{int t=*front;
if()
printf("first ele is %d\n",q[t]);
}
void display(int q[],int *front,int *rear)
{if(*front==-1&&*rear==-1)
{printf("queue is empty\n");
}
else
{while((*front)<=(*rear))
{int t=*front;
printf("ele - %d \n",q[t]);
(*front)++;
}
}
}
main()
{
int a,b,c,q[10],front=-1,rear=-1;
printf("enter limit of array\n");
scanf("%d",&a);
do
{

printf("1-enqueue\n2-dequeue\n3-display\n4-peeek\n5-exit\n");
scanf("%d",&b);
switch(b)
{case 1: 
{enqueue(q,&front,&rear,&a);break;
}
case 2:
	{ dequeue(q,&front,&rear);break;
	}
case 3:
	{display(q,&front,&rear);break;
	}
case 4:
	{peek(q,&front,&rear);break;
	}
}

}while(b!=5);
}
