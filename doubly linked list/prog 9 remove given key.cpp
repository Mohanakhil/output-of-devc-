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
{int a,b;struct node *head=NULL;
do{printf("enter ele\n");
scanf("%d",&a);
create(&head,a);
printf("press 2 for term\n");
scanf("%d",&b);
}while(b!=2);
print(&head);
do{
printf("press key for deletion\n ");
scanf("%d",&a);
struct node *node1=head,*temp1,*temp2;
while(node1!=NULL)
{if(node1->data==a)
{temp1=node1->prev;
if(temp1!=NULL&&node1->next!=NULL)
{
temp2=node1->next;
temp1->next=temp2;
temp2->prev=temp1;
free(node1);
node1=temp1;
}
if(temp1==NULL&&node1->next!=NULL)
{temp2=node1->next;
temp2->prev=NULL;
free(node1);
head=temp2;
node1=head;
}
if(node1->next==NULL)
{temp1->next=NULL;
free(node1);
}
}
node1=node1->next;
}
printf("after deleting \n");
print(&head);
printf("press 2 for term\n");
scanf("%d",&b);
}while(b!=2);
}
