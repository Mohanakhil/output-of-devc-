#include<stdio.h>
#include<stdlib.h>
struct node
{char data;
struct node *next;
};
void push(struct node **head,char newdata)
{
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=newdata;
	newnode->next=*head;
	*head=newnode;
}
void pop(struct node **head)
{ if(*head==NULL) printf("stack empty\n");
else
{
struct node *top=*head;
top=top->next;
free(*head);
*head=top;	
}
}
void peek(struct node **head)
{if(*head==NULL) printf("stack is empty\n");
else
{
struct node *top=*head;
printf("%c ",top->data);
}
}
void display(struct node **head)
{struct node *top=*head;
while(top!=NULL)
{printf("%c ",top->data);
top=top->next;
}
}
main()
{struct node *head=NULL;
int a,b,i=0;char s[100],c;

printf("ENTER INFIX STRING\n");
gets(s);
while(s[i]!='\0')
{ 
switch(s[i])
{
	case '(':
		{push(&head,'(');break;
		}
	case ')':
		{struct node *top=head;
		while(top->data!='(')
		{printf("%c",top->data);
		pop(&head);
		top=top->next;
		}pop(&head);
		break;
		}
	case '+':
		{
		if(head ==NULL||head->data=='(') push(&head,'+');
	else
		if((head->data=='-'||head->data=='*'||head->data=='/'||head->data=='^'||head->data=='+'||head->data=='^')&&(head!=NULL))
		{printf("%c",head->data);
		pop(&head);
		if(head->data!='*'&&head->data!='/'&&head->data!='-'&&head->data!='+')
		{
		push(&head,'+');
	}
		else
		if(head!=NULL)
		{
		pop(&head);
		push(&head,'+');
	}
		}
		break;
		}
    case '-':
    	{if(head==NULL||head->data=='(') push(&head,'-');
      else
      {if((head->data=='+'||head->data=='*'||head->data=='*'||head->data=='/'||head->data=='-'||head->data=='^')&&(head!=NULL))
    {
    printf("%c",head->data);
     pop(&head);
    if(head->data!='*'&&head->data!='/'&&head->data!='-'&&head->data!='+')
	{
	   push(&head,'-');
	}
	else
   if(head!=NULL)
   {pop(&head);
push(&head,'-');
}
}
}
 break;
	}
case '*':
	{if(head==NULL||head->data=='('||head->data=='+'||head->data=='-') push(&head,'*');
	else
	{if((head->data=='*'||head->data=='/'||head->data=='^')&&(head!=NULL))
{
printf("%c",head->data);
pop(&head);
if(head->data!='*'&&head->data!='/')
push(&head,'*');
else
{
	pop(&head);
push(&head,'*');
}

}
}
break;	
}
case '/':
	{if(head==NULL||head->data=='('||head->data=='+'||head->data=='-') push(&head,'/');
	else
	{if((head->data=='*'||head->data=='/'||head->data=='^')&&(head!=NULL))
	{
	printf("%c",head->data);
	pop(&head);
	if(head->data!='*'&&head->data!='/')
	push(&head,'/');
	else
	{pop(&head);
push(&head,'/');
	}
	}
	}
	break;
	}
case '^':
	{if(head==NULL||head->data=='^'||head->data=='+'||head->data=='-'||head->data=='*'||head->data=='/'||head->data=='^')
	push(&head,'^');
	
	break;
	}
default:
	{ 
	if((s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=122))
	printf("%c",s[i]);
	else
	{
	c=s[i]-'0';
	  printf("%d",c);break;
    }
}
}
	i++;
}
display(&head);
}

