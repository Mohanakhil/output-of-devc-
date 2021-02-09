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
void first(struct node **node1)
{struct node *node2;
node2=(*node1)->next;
free(node1);
*node1=node2;
(*node1)->prev=NULL;

}
void second(struct node **node1)
{struct node *node2=*node1,*temp1,*temp2;
temp1=node2->prev;
temp2=node2->next;
temp1->next=temp2;
temp2->prev=temp1;
(*node1)=temp1;
}
void third(struct node **node1)
{struct node *node2=*node1;
node2=(*node1)->prev;
free(node1);
node2->next=NULL;
(*node1)=node2;
}
int main()
{int a,b;struct node *head=NULL;
do{printf("enter ele\n");
scanf("%d",&a);
create(&head,a);
printf("press 2 for term\n");
scanf("%d",&b);
}while(b!=2);printf("\noriginal list\n");
print(&head);
do{
struct node *node1=head,*temp1,*temp2;
printf("enter key \n");
scanf("%d",&a);printf("\nHI node1=%d\n",node1->data);
while(node1!=NULL)
{if(node1->prev==NULL&&node1->data==a) 
{
first(&node1);printf("\nHI after 1st func node1=%d\n",node1->data);head=node1;
}
if(node1->prev!=NULL&&node1->next!=NULL&&node1->data==a)
{
  second(&node1);printf("\nHI after 2nd func node1=%d\n",node1->data);
}
if(node1->next==NULL&&node1->data==a) 
{
third(&node1);printf("\nHI after 3rd func node1=%d\n",node1->data);
}
if(node1->data!=a) 
{
node1=node1->next;
}
}

printf("\nafter deletion of %d\n",a);
print(&head);
printf("press 2 for term\n");
scanf("%d",&b);

}while(b!=2);
}
