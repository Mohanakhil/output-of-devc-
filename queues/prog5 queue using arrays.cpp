#include<stdio.h>
void e(int q[],int *f,int *r,int s)
{if(*r==(s-1)) printf("queue is overflowing\n");
else if(*r==-1&&*f==-1) 
{*r=0;
*f=0;
printf("enter ele\n");
scanf("%d",&q[*r]);
printf("%d is enqueued into queue\n",q[*r]);
}
else 
{*r=*r+1;
printf("enter ele\n");
scanf("%d",&q[*r]);
printf("%d is enqueued into queue\n",q[*r]);
}
}
void d(int q[],int *f,int *r)
{if(*r==-1&&*f==-1) printf("underflow cond\n");
else if(*r==*f)
{ printf("%d ele is dequed\n",q[*f]);
*r=-1;
*f=-1;
}
else
{printf("%d ele is dequed\n",q[*f]);*f=*f+1;
}
}
void dis(int q[],int *f,int *r)
{if(*f==-1&&*r==-1) printf("underflow cond\n");	
else
for(int i=*f;i<=*r;i++)
{printf("%d ",q[i]);

}
}
void peek(int q[],int *f,int *r)
{ if(*r==-1&&*f==-1) printf("underflow condition\n");
else printf("first ele is %d ",q[*f]);
	
}
main()
{int a,b,q[10],f=-1,r=-1,s=0;
printf("enter size of queue\n");
scanf("%d",&s);
do
{ printf("enter 1-enque \n 2-dequeue\n3-display\n4-peek\n5-exit\n");
scanf("%d",&a);
switch(a)
{case 1: {e(q,&f,&r,s);break;
}
case 2:{d(q,&f,&r);
	break;
} 
case 3:{
	dis(q,&f,&r);
	break;
}
case 4:{
	peek(q,&f,&r);
	break;
}
}
}while(a!=5);
}
