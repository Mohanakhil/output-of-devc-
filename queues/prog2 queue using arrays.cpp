#include<stdio.h>
void en(int q[],int s,int *f,int *r)
{int e;
if(*f==-1&&*r==-1)
{*f=0;
*r=0;
printf("enter ele\n");
scanf("%d",&e);
q[*r]=e;
printf("%d is enqueued into queue \n",q[*r]);
}
else if(*r==(s-1))
{printf("queue is overflowing\n");
}
else
{*r=*r+1;
printf("enter ele\n");
scanf("%d",&e);
q[*r]=e;
printf("%d is enqueued into queue \n",q[*r]);
}
}
void de(int q[],int *f,int *r)
{
	if(*f==-1&&*r==-1) {
	printf("*f=%d and *r=%d\n",*f,*r);
	printf("underflow \n");}
	else if(*f==(*r))
	{printf("%d is only ele in queue and its being deleted \n",q[*f]);
	printf("*f=%d and *r=%d\n",*f,*r);
	*f=-1;
	*r=-1;
	}
	else
	{printf(" dequeing started %d is dequeued from queue \n",q[*f]);
	printf("*f=%d and *r=%d\n",*f,*r);
	*f=(*f)+1;
	}
}
void peek(int q[],int *f,int *r)
{if(*f==-1&&*r==-1) printf("underflow\n");
else
printf("first ele is %d \n",q[*f]);

}
void display(int q[],int *f,int *r)
{if(*f==-1&&*r==-1) printf("underflow\n");
else
{ int t1=*f,t2=*r;
while(*f<=*r)
{printf("%d \n",q[*f]);
*f=*f+1;
}
*f=t1;
*r=t2;

}
}
main()
{int a,b,s;
int q[10];
printf("enter size of array\n");
scanf("%d",&s);
int front=-1,rear=-1;
do{
printf("1-en\n2-de\n3-peek\n4-display\n5-exit\n");
scanf("%d",&a);
switch(a)
{case 1: en(q,s,&front,&rear);break;
case 2: de(q,&front,&rear);break;
case 3: peek(q,&front,&rear);break;
case 4: display(q,&front,&rear);break;
}

}while(a!=5);
}
