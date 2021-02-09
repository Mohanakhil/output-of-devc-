0#include<stdio.h>
#include<stdlib.h>
struct node
{int data;
struct node *next;
};
void push(struct node **top,int newdata)
{struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=newdata;
newnode->next=*top;
*top=newnode;
printf("%d is pushed\n",(*top)->data);
}
void pop(struct node **top)
{struct node *temp=*top;
if(temp==NULL) printf("stack empty\n");
else
{printf("%d is popped out\n",(*top)->data);
*top=(*top)->next;
free(temp);
}
}
void peek(struct node **top)
{if(*top==NULL) printf("stack empty\n");
else
{

printf("\n top ele is %d\n",(*top)->data);
}}
void display(struct node **head)
{struct node *temp=*head;

if(temp==NULL)
printf("\nstack is empty\n");
else
{printf("\n stack is \n");
while(temp!=NULL)
{printf(" %d \n",temp->data);
temp=temp->next;
}
}
}
main()
{int a,b;struct node *head=NULL;
do{
printf("\nenter 1 for push\n2-pop\n3-peek\n4-display\n5-for exit\n");
scanf("%d",&a);

switch(a)
{case 1:
	{ printf("enter ele\n");
	scanf("%d",&a);
		push(&head,a);
		break;
	}
	case 2:
		{pop(&head);
		break;
		}
	case 3:
	{
		peek(&head);
		break;
	}
	case 4:
	{
		display(&head);
		break;
	}
}
}while(a!=5);
}
