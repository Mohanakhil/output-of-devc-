#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct stack
{int top;
unsigned capacity;
int *array;
};
struct stack *createstack(unsigned capacity)
{struct stack *stack=(struct stack*)malloc(sizeof(struct stack));
stack->top=-1;
stack->capacity=capacity;
stack->array=(int *)malloc(stack->capacity*sizeof(int));
return stack;
}
int isFull(struct stack *stack)
{return stack->top==stack->capacity-1;
}
int isEmpty(struct stack *stack)
{return stack->top==-1;
}
void push(struct stack *stack,int item)
{if(isFull(stack))
return;
stack->array[++stack->top]=item;
printf("\n%d pushed\n",item);
}
int pop(struct stack *stack)
{if(isEmpty(stack))
return INT_MIN;

return stack->array[stack->top--];
}
int peek(struct stack *stack)
{if(isEmpty(stack))
return INT_MIN;
return stack->array[stack->top];
}
main()
{int a,b;
struct stack *stack=createstack(100);
do{printf("press 1 for push 2 for term and 3 for pop and 4 for peek\n");
scanf("%d",&b);
if(b==1)
{
printf("enter ele\n");
scanf("%d",&a);
push(stack,a);
}
else 
if(b==3)
{printf("%d is popped out \n",pop(stack));
}
else
if(b==4)
printf("%d is at the top\n ",peek(stack));

}while(b!=2);


}

