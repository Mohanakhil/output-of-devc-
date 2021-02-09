#include<stdio.h>
#include<stdlib.h>
struct node
{int data;
struct node *prev;
struct node *next;
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
int main()
{int a,b,c=0,t,m=1,n;struct node *head=NULL;
do{
	printf("enter ele\n");
	scanf("%d",&a);c++;
	create(&head,a);
	printf("press 2 for term\n");
	scanf("%d",&b);
}while(b!=2);
print(&head);
printf("enter size\n");
scanf("%d",&n);
struct node *current=head;struct node *node1=head;struct node *temp;
while(node1!=NULL)
{t=n;
current=node1;
if(current->next!=NULL)
{
while(current!=NULL)
{temp=current->prev;
current->prev=current->next;
current->next=temp;
current=current->prev;
}
if(temp!=NULL)
{node1=temp->prev;
if(m>0)
{head=node1;m--;
}}
while(t>0)
{
node1=node1->next;
t--;
}}}
printf("after reve\n");
print(&head);

}
