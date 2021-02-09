#include<stdio.h>
#include<stdlib.h>
struct node 
{int data;
struct node *next;
};
void create(struct node **head,int newdata,int c)
{struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=newdata;int k=c;
newnode->next=*head;struct node *temp=*head;
if(*head!=NULL)
{while(temp->next!=*head)
{temp=temp->next;
}
temp->next=newnode;
}
else newnode->next=newnode;
(*head)=newnode;
if(*head!=NULL)
{ struct node *temp=*head;
while(k>1)
{temp=temp->next;k--;
}printf("temp=%d\n ",temp->data);
struct node *node1=*head,*t=(*head)->next;
while(((node1)->data)>((node1)->next->data)&&(c>1))
{
*head=node1->next;
node1->next=temp;
(*head)->next=node1;
temp->next=*head;
*head=temp->next;
c--;
}
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
do{
	printf("enter ele\n");
	scanf("%d",&a);c++;
	create(&head,a,c);
	printf("\npress 2 fr term\n");
	scanf("%d",&b);
}while(b!=2);
print(&head);
}
