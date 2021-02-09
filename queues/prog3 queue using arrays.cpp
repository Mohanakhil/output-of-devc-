#include<stdio.h>
void e(int size,int q[],int *f,int *r)
{int n;
if(*f==-1&&*r==-1)
{printf("enter new ele\n");
scanf("%d",&n);
*f=*r=0;
q[*r]=n;
printf("%d has entered the queue\n",q[*r]);
}
else if(*r==(size-1))
{printf("queue is overflowing\n");
}
else
{*r=*r+1;
printf("enter new ele\n");
scanf("%d",&n);
q[*r]=n;
printf("%d has enetered the queue\n",q[*r]);
}
}
void d(int q[],int *f,int *r)
{ if(*r==-1&&*f==-1)
{printf("queue is underflow condition\n");
}
else if(*f==*r)
{printf("%d is dequeued from the queue\n",q[*r]);
*f=*r=-1;
}
else 
{printf("%d is dequeued from the list\n",q[*f]);
*f=*f+1;
}

}
void dis(int q[],int *f,int *r)
{if(*f==-1&&*r==-1)
printf("queue is underflowing\n");
else 
{printf("queue is \n");
for(int i=*f;i<=*r;i++)
printf("%d \n",q[i]);
}
}
void peek(int q[],int *f)
{printf("%d is the front ele in the queue\n",q[*f]);
}
main()
{int a,b,q[10],front=-1,rear=-1;
printf("enter size of array\n");
scanf("%d",&a);
do{
printf("1-enqueue\n2-dequeue\n3-display\n4-peek\n5-exit\n");
scanf("%d",&b);
switch(b)
{case 1:
       {e(a,q,&front,&rear);break;
		   }	
case 2:{ d(q,&front,&rear); break;
	break;
}
case 3: { dis(q,&front,&rear); break;
	break;
}
case 4: { peek(q,&front);break;
	break;
}

}

}while(b!=5);
}
