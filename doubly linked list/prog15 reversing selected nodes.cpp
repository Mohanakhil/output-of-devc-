#include<stdlib.h>
#include<stdio.h>
struct node
{int data;
struct node *next;
struct node *prev;
};
void create(struct node **head,int newdata)
{struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=newdata;
newnode->next=*head;
newnode->prev=NULL;
if(*head!=NULL)
{(*head)->prev=newnode;
}
*head=newnode;
}
void print(struct node **head)
{struct node *node1=*head;
while(node1!=NULL)
{printf("%d ",node1->data);
node1=node1->next;
}
}
void reverse(struct node **head,int a)
{struct node *current=*head,*temp;
while(current!=NULL&&a>0)
{temp=current->prev;
current->prev=current->next;
current->next=temp;
current=current->prev;
a--;
}
if(temp!=NULL)
{*head=temp->prev;
}
}
int main()
{int a,b,c=0,t;struct node *head=NULL;
do{
	printf("enter ele\n");
	scanf("%d",&a);c++;
	create(&head,a);
	printf("press 2 for term\n");
	scanf("%d",&b);
}while(b!=2);
print(&head);
printf("\npress no of digits\n");
scanf("%d",&a);struct node *node1=head,*temp;t=a;
while(node1->next!=NULL)
{
reverse(&node1,a);
if(node1->next->next==NULL)
{
node1=node1->prev;
}
else 
node1=node1->next;
a=t;
}
printf("\nafter rever\n");

if(node1->next==NULL)
{
temp=node1;
node1=node1->prev;printf("HI HELLO NODE1=%d\n",node1->data);
head=node1;
print(&head);
printf("%d ",temp->data);
}
else 
{
head=node1;
print(&head);
}}
