#include<stdio.h>
#include<stdlib.h>
struct node
{char data;
struct node *next;
};
void push(struct node **head,char newdata)
{struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=newdata;
newnode->next=*head;
*head=newnode;
}
void pop(struct node **head)
{struct node *temp=*head;
if(temp==NULL) printf("underflow cond\n");
if(temp->data==')')
{while(temp->data!='(')
{(*head)=(*head)->next;
free(temp);
temp=temp->next;
}
*head=(*head)->next;
free(temp);
}
else
{*head=(*head)->next;
free(temp);
}
}
void display(struct node **head)
{struct node *temp=*head;
while(temp!=NULL)
{printf("%c ",temp->data);
temp=temp->next;
}
}
void peek(struct node **head)
{if((*head)==NULL)
{printf("null stack\n");
}
else
{

printf("%d ",(*head)->data);
}
}
main()
{	int a,b,i=0,j=0;char s[100],out[100];
struct node *head=NULL;
printf("enter infix\n");
gets(s);
while(s[i]!='\0')
{
switch(s[i])
{	case '(':
		{push(&head,'(');
		break;
		}
		case ')':
			{struct node *temp=head;
			while(temp->data!='(')
			{printf("%c ",temp->data);
			temp=temp->next;
			}
			pop(&head);
			break;
			}
			case '+':
				{if(head==NULL) 
				{
				push(&head,'+');
				break;
				}
				if((head->data=='-'||head->data=='*'||head->data=='/'||head->data=='^'||head->data=='+')&&(head!=NULL))
				{
				pop(&head);
				peek(&head);
				push(&head,'+');
				}
				break;
				}
			case '-':
			 {if(head==NULL) push(&head,'-');
			 if((head->data=='+'||head->data=='*'||head->data=='/'||head->data=='^')&&(head!=NULL))
			 {pop(&head);
			 push(&head,'-');break;
			 }
			 }	
	default : printf("%c ",s[i]);break;		
	}
	i++;			
}
display(&head);
}

	

