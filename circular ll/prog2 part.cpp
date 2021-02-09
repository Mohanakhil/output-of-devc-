#include<stdio.h>
#include<stdlib.h>
struct node
{int data;
struct node  *next;
};
void create(struct node **head,int newdata)
{struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=newdata;
newnode->next=*head;
if(*head!=NULL)
{
struct node *temp=*head;
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
int main()
{int a,b;struct node *head=NULL;
do{
printf("enter a ele\n");
scanf("%d",&a);
create(&head,a);
printf("press 2 for term\n");
scanf("%d",&b);
}while(b!=2);
print(&head);
split(&head);

}
