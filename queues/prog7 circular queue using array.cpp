#include<stdio.h>
void e(int q[],int *front,int *rear,int s)
{if(*front==-1&&*rear==-1) 
{*front=*rear=0;
printf("enter new ele\n");
scanf("%d",&(q[*rear]));
printf("%d is enqueued\n",q[*rear]);
}
else if((((*rear)+1)%s)==*front)
{printf("queue is overflowing\n");
}
else
{*rear=(*rear+1)%s;
printf("enter ele\n");
scanf("%d",&(q[*rear]));
printf("%d is enqueued\n",q[*rear]);
}
}
void d(int q[],int *front,int *rear,int s)
{if(*front==-1&&*rear==-1) printf("queue is empty\n");
else if(*front==*rear)
{printf("%d is dequed\n",q[*front]);
*front=*rear=-1;
}
else 
{printf("%d is deqed\n",q[*front]);
*front=(*front+1)%s;
}
}
void display(int q[],int *front,int *rear,int s)
{int i=*front;
while(i!=*rear)
{printf("%d ",q[i]);
i=(i+1)%s;
} 
printf("%d \n",q[*rear]);
}
void peek(int q[],int *front,int *rear)
{if(*front==-1&&*rear==-1) printf("queue is empty\n");
else 
printf("first ele is %d\n",q[*front]);
}
main()
{int a,b,q[10],front=-1,rear=-1,s;
printf("enter size of queue\n");
scanf("%d",&s);
do{
printf("1-enq\n2-deq\n3-displ\n4-peek\n5-exit\n");
scanf("%d",&a);
switch(a)
{case 1: {e(q,&front,&rear,s);break;}
case 2:{ d(q,&front,&rear,s);
	break;
}
case 3:{ display(q,&front,&rear,s);
	break;
}
case 4:{peek(q,&front,&rear);
	break;
}

}
}while(a!=5);
}
