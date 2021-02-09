#include<stdio.h>
#include<stdlib.h>
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
main()
{int a,b;struct node *head=NULL;
do{printf("enter ele\n");
scanf("%d",&a);
create(&head,a);
printf("press 2 for term\n");
scanf("%d",&b);
}while(b!=2);printf("\noriginally\n");
print(&head);struct node *node1=head,*node2=head->next,*temp,*temp1;
while(node1->next!=NULL)
{
	while(node2->next!=NULL)
	{if(node1->data==node2->data)
	{
	if(node1->next->data==node2->data)
	{
	temp=node2->next;
	free(node2);
	node1->next=temp;
	node1->next->prev=node1;
	node2=node1;}
	else
	{temp=node2->prev;
	temp1=node2->next;
	free(node2);
	temp->next=temp1;
	temp1->prev=temp;
	}
	}
	node2=node2->next;
	}

	node1=node1->next;
	node2=node1->next;
}node1=head;
while(node1->next->next!=NULL)
{node1=node1->next;
}
printf("\nHI HEELLO node1=%d ",node1->data);
if(node1->data==node1->next->data)
{free(node1->next);
node1->next=NULL;
}

printf("\nafter dele of duplicates\n");
print(&head);
}
