#include<stdio.h>
#include<stdlib.h>
struct node 
{int data;
struct node *next;
};
void create(struct node **head,int newdata,int c)
{struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=newdata;
newnode->next=*head;
struct node *temp=newnode;
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
void print(struct node **head,int c)
{struct node *node1=*head;
do
{printf("%d ",node1->data);
node1=node1->next;
}while(node1->next!=*head);

}
main()
{int a,b,c=0;struct node *head=NULL;
do{printf("enter ele\n");
scanf("%d",&a);c++;
create(&head,a,c);
printf("press 2 for term\n");
scanf("%d",&b);
}while(b!=2);
print(&head,c);
}
