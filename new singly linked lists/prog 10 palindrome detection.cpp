#include<stdio.h>
#include<stdlib.h>
struct node
{int data;
struct node *next;
};
void create(struct node **head,int newdata)
{struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=newdata;
newnode->next=*head;
*head=newnode;
}
main()
{struct node *head=NULL;
int a,b,c=0,count=0;
do{
	printf("enter ele\n");
	scanf("%d",&a);
	create(&head,a);
	printf("press 2 for term\n");
	scanf("%d",&b);
}while(b!=2);
struct node *node1=head;
while(node1!=NULL)
{printf("%d ",node1->data);
node1=node1->next;c++;
}
node1=head;
printf("count of list =%d \n",c);
struct node *fast=head,*slow=head;
while(fast!=NULL&&fast->next!=NULL&&slow!=NULL)
{fast=fast->next->next;
slow=slow->next;
}
if(c%2==0)
{struct node *prev=NULL,*current=slow,*next;
while(current!=NULL)
{next=current->next;
current->next=prev;
prev=current;
current=next;
}
slow=prev;
while(slow!=NULL)
{
if(node1->data!=slow->data) count++;
slow=slow->next;node1=node1->next;
}
if(count==0) printf("it is a palindrome\n");
if(count>0)printf("sorry not a palindrome\n");
}count=0;
if(c%2!=0)
{slow=slow->next;
struct node *prev=NULL,*current=slow,*next;
while(current!=NULL)
{next=current->next;
current->next=prev;
prev=current;
current=next;
}
slow=prev;
while(slow!=NULL)
{if(node1->data!=slow->data) count++;
slow=slow->next;node1=node1->next;
}
if(count==0) printf("its a palindrome\n");
else printf("not a palindrome\n");
}


}
