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
{struct node *node1=*head;printf("\nstraight tracing\n");
while(node1->next!=NULL)
{printf("%d ",node1->data);
node1=node1->next;
}
printf("%d ",node1->data);printf("\nreverse tracing\n");
while(node1!=NULL)
{printf("%d ",node1->data);
node1=node1->prev;
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
do{
struct node *ptr1=head,*ptr2=head,*temp1,*temp2;
printf("enter val of index for swapping\n");
scanf("%d",&a);b=a;
while(a>0&&ptr1!=NULL)
{a--;
ptr1=ptr1->next;
}printf("hello ptr1=%d ",ptr1->data);
while(ptr2->next!=NULL)
{ptr2=ptr2->next;
}
while(b>0&&ptr2!=NULL)
{ptr2=ptr2->prev;b--;
}printf("\nhello ptr2=%d \n",ptr2->data);
if(ptr1->prev!=NULL&&ptr2->next!=NULL)
{ptr1->prev->next=ptr2;
ptr2->prev->next=ptr1;temp1=ptr2->next;
ptr2->next=ptr1->next;
ptr1->next=temp1;

ptr2->next->prev=ptr2;
ptr1->next->prev=ptr1;
temp1=ptr2->prev;
ptr2->prev=ptr1->prev;
ptr1->prev=temp1;
}
if(ptr1->next==NULL&&ptr2->prev==NULL)
{struct node *t;
t=ptr1;
ptr1=ptr2;
ptr2=t;
ptr2->next=ptr1->next;
ptr1->prev=ptr2->prev;
ptr2->prev=NULL;
ptr2->next->prev=ptr2;
ptr1->next=NULL;
ptr1->prev->next=ptr1;
head=ptr2;
}
else
{ptr2->next=ptr1->next;
ptr1->prev=ptr2->prev;
ptr2->prev=NULL;
ptr2->next->prev=ptr2;
ptr1->next=NULL;
ptr1->prev->next=ptr1;
head=ptr2;
}
print(&head);
printf("press 2 for term\n");
scanf("%d",&b);
}while(b!=2);
}
