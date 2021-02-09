#include<stdio.h>
#include<stdlib.h>
struct node 
{int data;
struct node *next;
};
void create(struct node **head,int newdata)
{ struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=newdata;
newnode->next=*head;
*head=newnode;
}
main()
{int a,b=0;
struct node *head=NULL;
do{
printf("enter ele\n");
scanf("%d",&a);
create(&head,a);
printf("press 2 for term\n");
scanf("%d",&b);
}while(b!=2);
do{

struct node *node1=head,*fast=head,*slow=head;
while(node1!=NULL)
{printf("%d ",node1->data);

node1=node1->next;
}node1=head;
while(node1!=NULL&&fast->next!=NULL)
{fast=fast->next->next;
slow=slow->next;
node1=node1->next;
}
printf("middle of list is %d\n",slow->data);
printf("enter ele to count \n");
scanf("%d",&a);
node1=head;int c=0;
while(node1!=NULL)
{if(node1->data==a) c++;
node1=node1->next;
}
printf("count of ele %d is %d\n",a,c);
printf("press 2 for term\n");
scanf("%d",&b);
}while(b!=2);

}
