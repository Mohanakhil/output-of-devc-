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
{int a,b,c=0,i=0,count=0;
struct node *head=NULL;
do{
	printf("enter ele\n");
	scanf("%d",&a);
	create(&head,a);
	printf("press 2 for term\n");
	scanf("%d",&b);
}while(b!=2);
struct node *node1=head;
while(node1!=NULL)
{printf("%d ",node1->data);c++;
node1=node1->next;
}
printf("count of ele is %d\n",c);
struct node *node2=head;
while(i<c/2)
{node2=node2->next;i++;
}
printf("sample node2=%d \n",node2->data);
if(c%2==0)
{struct node *current=node2,*next=NULL,*prev=NULL;
struct node *node3=head;
while(current!=NULL)
{next=current->next;
current->next=prev;
prev=current;
current=next;
}
node2=prev;
while(node2!=NULL)
{
if(node3->data!=node2->data) count++;
node2=node2->next;node3=node3->next;
}
if(count==0) printf("its a palindrome\n");
else printf("its not a palindrome\n ");
}
if(c%2!=0)
{node2=node2->next;
struct node *current=node2,*next=NULL,*prev=NULL;
 struct node *node3=head;
 while(current!=NULL)
 {next=current->next;
 current->next=prev;
 prev=current;
 current=next;
 } node2=prev;count=0;
while(node2!=NULL)
{ if(node3->data!=node2->data) count++;
node2=node2->next;node3=node3->next;
}
if(count==0) printf("is a palin\n");
else printf("not a palindrome\n");
}
}
