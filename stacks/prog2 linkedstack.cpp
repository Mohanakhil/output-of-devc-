#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct stackNode
{int data;
struct stackNode *next;
};
struct stackNode *newnode(int newdata)
{struct stackNode *stacknode=(struct stackNode*)malloc(sizeof(struct stackNode));
stacknode->data=newdata;
stacknode->next=NULL;
return stacknode;
}
int isEmpty(struct stackNode *root)
{return !root;
}
int push(struct stackNode **root,int newdata)
{struct stackNode *stacknode=newnode(newdata);
stacknode->next=*root;
*root=stacknode;
printf("%d is pushed\n",newdata);
}
int pop(struct stackNode **root)
{if(isEmpty(*root))
return INT_MIN;
struct stackNode *temp=*root;    printf("HI IM IN POP\n");
*root=(*root)->next;
int p=temp->data;


return p;
}
int peek(struct stackNode **root)
{if(isEmpty(*root))
return INT_MIN;
return (*root)->data;
}
main()
{int a,b;struct stackNode *root=NULL;

do{printf("1-push\n2-pop\n3-peek\n4-term\n");
scanf("%d",&b);
if(b==1)
{
printf("enter ele\n");
scanf("%d",&a);
push(&root,a);
}
else if(b==2)
{int t=pop(&root);
printf("\n%d is popped out\n",t);
}
else if(b==3)
{
printf("%d ele at top\n",peek(&root));
}


}while(b!=4);

}
