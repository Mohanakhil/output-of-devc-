#include<stdio.h>
#include<stdlib.h>
struct node
{int data;
struct node *next;
};
void create(struct node **head,int newdata)
{struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=newdata;
newnode->next=*head;struct node *temp=*head;
if(*head!=NULL)
{
	while(temp->next!=*head)
	{temp=temp->next;
	}
	temp->next=newnode;
	
}
else {
newnode->next=newnode;}
*head=newnode;

struct node *node1=*head;
do
{ if((node1->data)>(node1->next->data))
{if(node1->next->next==*head)
{*head=node1->next;
}
else
{struct node *third=node1->next->next;
struct node *second=node1->next;
struct node *first=node1;
second->next=first;
first->next=third;
node1=first;
}
}
node1=node1->next;
	
}while(node1!=*head);*head=node1;








}
void print(struct node **head)
{struct node *node=*head;
do
{printf("%d ",node->data);
node=node->next;
}while(node!=*head);

}
main()
{int a,b;struct node *head=NULL;
do{printf("enter ele\n");
scanf("%d",&a);
create(&head,a);
printf("press 2 for term\n");
scanf("%d",&b);

}while(b!=2);
print(&head);
}
