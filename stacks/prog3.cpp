#include<stdio.h>
void push(int b,int stack[],int *top)
{
*top=*top+1;
int t=*top;
stack[t]=b;
printf("%d is pushed\n",stack[t]);
}
void pop(int stack[],int *top)
{int t=*top;
printf("%d is popped out\n",stack[t]);
*top=*top-1;
}
void peek(int stack[],int *top)
{int t=*top;
printf("%d is the top most ele\n",stack[t]);
}
void displayall(int stack[],int *top)
{int t=*top;printf("\nstack in original order\n");
while(t>=0)
{printf(" %d \n",stack[t]);
t--;
}

}
main()
{int a,b,u=0,top=-1;
printf("enter upper limit of stack\n");
scanf("%d",&u);
int stack[u];
do{
printf("\n1 for push\n2 for pop\n3 for peek\n4 for display \n5 for exit \n");
scanf("%d",&a);
switch(a)
{
case 1:
{if(top==u)
printf("max limit of stack reached so remove and enter \n");
else
{
printf("enter val\n");
scanf("%d",&b);
push(b,stack,&top);
}
break;
}
case 2: {
	if(top==-1)
	{printf("stack is empty\n");
	}
	else
	{
	
pop(stack,&top);
}
break;
}
case 3:
	{peek(stack,&top);break;
	}
case 4:
	{displayall(stack,&top);break;
}
}
}while(a!=5);
}
