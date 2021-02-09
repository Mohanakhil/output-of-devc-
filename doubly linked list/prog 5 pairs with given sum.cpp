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
}while(b!=2);
print(&head);
struct node *node1=head,*node2=head->next;
printf("HI %d %d\n",node1->data,node2->data);
printf("enter sum you want\n");
scanf("%d",&a);

while(node1->next!=NULL)
{ 
	while(node2->next!=NULL)
	{if((node1->data)+(node2->data)==a)
	{printf("\n pair with given sum is (%d,%d)\n",node1->data,node2->data);
	}
	node2=node2->next;
	}
	node1=node1->next;
	node2=node1->next;
}

}
