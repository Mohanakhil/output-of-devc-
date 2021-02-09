#include<stdio.h>
#include<stdlib.h>
struct node
{int data;
struct node *next;
};
void create(struct node **head,int newdata,int c)
{struct node *newnode=(struct node *)malloc(sizeof(struct node ));
newnode->data=newdata;
newnode->next=*head;struct node *temp=*head;
if(*head!=NULL)
{while(temp->next!=*head)
{temp=temp->next;
}
temp->next=newnode;
}
else newnode->next=newnode;
*head=newnode;
struct node *node1=*head,*node2=*head;int t3;
if(*head!=NULL&&(node1->data)>(node1->next->data))
{
do
{t3=node1->data;
node1->data=node1->next->data;
node1->next->data=t3;

node1=node1->next;
}while((node1->data)>(node1->next->data)&&node1->next!=*head);
}
}
void print(struct node **head)
{struct node *node1=*head;
do
{printf("%d ",node1->data);
node1=node1->next;
}while(node1!=*head);
}
main()
{int a,b,c=0;struct node *head=NULL;
do{printf("enter ele\n");
scanf("%d",&a);c++;
create(&head,a,c);
printf("enter 2 fr term\n");
scanf("%d",&b);
}while(b!=2);
print(&head);

}
