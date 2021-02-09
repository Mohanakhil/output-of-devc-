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
{int a,b,t;
struct node *head=NULL;
do{printf("enter ele\n");
scanf("%d",&a);
create(&head,a);
printf("press 2 for term\n");
scanf("%d",&b);
}while(b!=2);struct node *node1=head;
while(node1!=NULL)
{printf("%d ",node1->data);
node1=node1->next;
}
node1=head;
while(node1->next!=NULL)
{node1=node1->next;
}
struct node *node2=head;
while(node2->next->next!=NULL)
{node2=node2->next;
}
printf("node2=%d node1=%d \n",node2->data,node1->data);
node2->next=NULL;
node1->next=head;
head=node1;

node1=head;printf("after bringing last ele to first\n");
while(node1!=NULL)
{printf("%d ",node1->data);
node1=node1->next;
}
}
