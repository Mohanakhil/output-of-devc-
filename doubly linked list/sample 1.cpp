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
void print(struct node **head)
{struct node *node1=*head;
while(node1!=NULL)
{printf("%d ",node1->data);
node1=node1->next;
}
}
main()
{int a,b;
struct node *head=NULL;
do{printf("enter ele\n");
scanf("%d",&a);
create(&head,a);
printf("press 2 for term\n");
scanf("%d",&b);
}while(b!=2);printf("\noriginally\n");
print(&head);
struct node *prev=NULL,*current=head,*next;
while(current!=NULL)
{next=current->next;
current->next=prev;
prev=current;
current=next;
}
head=prev;printf("\nafter revrsing\n");
print(&head);
}
