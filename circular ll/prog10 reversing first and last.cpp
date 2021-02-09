#include<stdio.h>
#include<stdlib.h>
struct node
{int data;
struct node *next;
};
void create(struct node **head,int newdata)
{struct node *newnode=(struct node *)malloc(sizeof(struct node));
newnode->data=newdata;
newnode->next=*head;struct node *temp=*head;
if(*head!=NULL)
{
while(temp->next!=*head)
{temp=temp->next;
}
temp->next=newnode;
}
else newnode->next=newnode;
*head=newnode;
}
void print(struct node **head)
{struct node *node1=*head;
do
{printf("%d ",node1->data);
node1=node1->next;
}while(node1!=*head);
}
void reverse(struct node **head)
{struct node *node1=*head;
while(node1->next->next!=*head)
{node1=node1->next;
}
printf("\nafter traversing node1=%d \n",node1->data);
struct node *temp=node1->next;
temp->next=(*head)->next;
(*head)->next=temp;
node1->next=*head;
*head=temp;
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
reverse(&head);
print(&head);
}
