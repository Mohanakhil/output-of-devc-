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
while(node1->next!=NULL)
{printf("%d ",node1->data);
node1=node1->next;
}
printf("%d ",node1->data);
}
main()
{int a,b,t;struct node *head=NULL;
do{printf("enter ele\n");
scanf("%d",&a);
create(&head,a);
printf("press 2 for term\n");
scanf("%d",&b);
}while(b!=2);
print(&head);
printf("enter val for rot\n");
scanf("%d",&a);t=a;
struct node *current=head,*temp=NULL,*node1=head;
while(node1->next!=NULL&&t>0)
{node1=node1->next;
t--;
}
node1=node1->next;
node1->prev=NULL;
printf("\nnode1=%d\n",node1->data);
while(node1->next!=NULL)
{temp=node1->prev;
node1->prev=node1->next;
node1->next=temp;
node1=node1->prev;
}printf("2nd half rev\n");
if(temp!=NULL) node1=temp->prev->prev;
print(&node1);

while(current!=NULL&&a>=0)
{temp=current->prev;
current->prev=current->next;
current->next=temp;
current=current->prev;
a--;
}struct node *ptr1;
if(temp!=NULL) ptr1=temp->prev;
printf("1st reversal\n");
print(&ptr1);



}
